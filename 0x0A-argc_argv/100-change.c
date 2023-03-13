#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int min_coin(int amt, int *coin, int size, int *memkey, int *memval);

/**
 * main - Entrypoint to program that print minimum amount of
 * change
 * @argc: integer argument count
 * @argv: pointer to array of command line arguments
 *
 * Return: integer 1 or 0
 */

int main(int argc, char **argv)
{
	int num, ans;
	int coin[] = {1, 2, 5, 10, 25};
	int size = 5;
	int *memval;
	int *memkey;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(*(argv + 1));

	if (num < 0)
		printf("0\n");
	else
	{
		memkey = malloc(num * sizeof(int));
		memval = malloc(num * sizeof(int));
		ans = min_coin(num, coin, size, memkey, memval);
		printf("%d\n", ans);
	}
	return (0);
}

/**
 * in - checks if integer val is in array
 * @array: pointer to integer array
 * @size: integer size of the array
 * @val: integer number to check
 *
 * Return: integer index of val in array or -1 if not found
 */

int in(int *array, int *size, int val)
{
	int pos = 0;
	int s = *size;

	while (pos < s)
	{
		if (*(array + pos) == val)
			return (pos);
		pos++;
	}
	return (-1);
}

/**
 * append - Add integer val to values and corresponding key k
 * to key
 * @key: pointer to array representing the key
 * @values: pointer to array representing the values
 * @size: pointer to integer representing size of key and values
 * @val: integer value to append to values
 * @k: integer key to append to "key"
 *
 * Return: void
 */

void append(int *key, int *values, int *size, int val, int k)
{
	*(key + *size) = k;
	*(values + *size) = val;
	*size = *size + 1;
}

/**
 * min_coin - Calculate the minimum number of coin to
 * make up amt
 * @amt: integer target amount
 * @coin: pointer to array of coin
 * @size: integer size of coin
 * @memkey: pointer to array of memoized key
 * @memval: pointer to array of memoized value
 *
 * Return: integer number of coins, -1 if error
 */

int min_coin(int amt, int *coin, int size, int *memkey, int *memval)
{
	static int arr_size;
	int min = 0; /* minimum number of coins */
	int value, count, item, result, loc;

	if (amt == 0)
	{/* base case reached */
		return (0);
	}
	if (amt < 0)
	{/* coin cannot be changed */
		return (-1);
	}

	loc = in(memkey, &arr_size, amt);

	if (loc >= 0)
	{
		return (*(memval + loc));
	}

	count = 0;
	for (; count < size; count++)
	{
		value = 0;
		item = *(coin + count);
		result = min_coin(amt - item, coin, size, memkey, memval);
		if (result == 0)
			value += 1;
		else if (result > 0)
			value += result + 1;
		if (min == 0)
			min = value;
		else if ((min > value) && (value != 0))
			min = value;
	}
	append(memkey, memval, &arr_size, min, amt);
	return (min);
}
