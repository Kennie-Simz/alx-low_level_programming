#!/usr/bin/python3
"""
This module calculates the perimeter of a grid
"""


def island_perimeter(grid):
    """
    perimeter function
    """
    p = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    p += 1
                if y == 0 or grid[x][y - 1] == 0:
                    p += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    p += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    p += 1
    return (p)
