int is_prime(int n, int prime);

/**
 * is_prime_number - Check if a given number is prime
 * number
 * @n: integer number to check
 *
 * Return: integer 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - Recursively check if a number is prime
 * @n: integer number to check
 * @prime: integer minimum prime number (always 2)
 *
 * Return: integer 1 if prime 0 otherwise
 */

int is_prime(int n, int prime)
{
	int ans;

	if (prime > 9)
		return (1);
	if (n == 1  || n == -1 || n % prime == 0)
		return (0);

	return (is_prime(n, prime + 1));
}
