#!/usr/bin/python3

"""5-island_perimeter
Returns perimeter of island described in grid argument.
"""


def island_perimeter(grid):
    """Returns perimeter of island in grid"""

    if not grid or not grid[0]:
        return 0

    row = len(grid)
    col = len(grid[0])
    counter = 0

    for i in range(row):
        for j in range(col):

            if grid[i][j] == 1:

                counter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    counter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    counter -= 2

    return counter
