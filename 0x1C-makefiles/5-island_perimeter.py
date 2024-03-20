#!/usr/bin/python3
"""Contain method that calculate perimeter."""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid."""
    inn = 0
    peri = 0

    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1 and (x != 0 or y != 0):
                peri += 4
                if y != (len(grid[0]) - 1) and (x != (len(grid)) - 1):
                    if grid[x + 1][y] == 1 or grid[x][y + 1] == 1:
                        inn += 1
                if grid[x - 1][y] == 1 or grid[x][y - 1] == 1:
                    inn += 1
    return (peri - inn)
