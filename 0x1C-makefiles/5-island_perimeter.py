#!/usr/bin/python3
"""Module for island_perimeter method."""


def island_perimeter(grid):
    """Method that returns the perimeter of the island described in grid."""
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perim += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perim += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perim += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perim += 1
    return perim
