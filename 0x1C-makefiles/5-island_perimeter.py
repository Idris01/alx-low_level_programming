#!/usr/bin/python3
""" Island Perimeter module

This module define a single function that finds the perimeter of
an island
"""


def island_perimeter(grid):
    """Finds Perimeter of a grid

    Parameters:
    ===========
    grid: list of list of integers

    Returns: integer perimeter of the island
    """

    row_num = len(grid)
    col_num = len(grid[0])
    explored = []
    boundry = set()
    point = None

    def _do_search(point, grid):
        """Helper function that performs recursive search

        Arguments:
        =========
        point (tuple): tuple of int of form (x, y) point on grid
        grid : list of list on integers

        Returns: None
        """
        x, y = point
        point_str = "{},{}".format(x, y)
        is_boundry = grid[x][y] == 0
        if is_boundry or point_str in explored:
            return

        explored.append(point_str)
        for i, j in [
                (x-1, y), (x+1, y),
                (x, y-1), (x, y+1),
                (x-1, y-1), (x+1, y-1),
                (x-1, y+1), (x+1, y+1)]:
            if grid[i][j] == 0:
                boundry.add("c{},r{}".format(i, j))
        _do_search((x, y+1), grid)
        _do_search((x+1, y), grid)

    for i, row in enumerate(grid):
        for j, col in enumerate(row):
            if col == 1:
                point = (i, j)
                break
        if point is not None:
            break
    if point is None:
        return 0

    # check that there is actually a lake
    if any(item == 1 for item in grid[0]):
        return 0
    if any(item == 1 for item in grid[-1]):
        return 0
    transposed = []
    for item in zip(*grid):
        transposed.append(list(item))
    if any(item == 1 for item in transposed[0]):
        return 0
    if any(item == 1 for item in transposed[-1]):
        return 0

    _do_search(point, grid)
    size = len(boundry)
    return size - 4
