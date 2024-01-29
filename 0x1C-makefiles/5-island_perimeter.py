#!/usr/bin/python3
"""A Grid Perimeter Function"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): Represents the island, where
      0 is water and 1 is land.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - The grid is rectangular with width and height not exceeding 100.
    - The grid is completely surrounded by water.
    - There is one island or nothing.
    - The island doesn't have "lakes" (water inside not connected to
      the water around the island).
    """

    p = 0

    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                p += 4

                """ Check left neighbor"""
                if cell - 1 >= 0 and grid[row][cell - 1] == 1:
                    p -= 2

                """Check top neighbor"""
                if row - 1 >= 0 and grid[row - 1][cell] == 1:
                    p -= 2

    return p
