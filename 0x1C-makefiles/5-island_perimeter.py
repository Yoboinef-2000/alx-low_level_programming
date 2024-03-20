#!/usr/bin/python3

"""Return the perimeter of the island described in grid."""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid."""
    pm = 0
    for i in range(len(grid)):

        for j in range(len(grid[0])):

            if grid[i][j] == 1:
                pm += 4

                if i > 0 and grid[i - 1][j] == 1:
                    pm -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    pm -= 2

    return (pm)
