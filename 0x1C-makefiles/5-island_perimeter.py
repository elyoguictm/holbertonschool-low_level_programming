#!/usr/bin/python3
"""Perimeter of the island described in grid"""


def island_perimeter(grid):
    """ returns the perimeter """

    perim = 0
    len_va = len(grid)
    len_co = len(grid[0])

    for z in range(len_va):
        for x in range(len_co):
            if grid[z][x] == 1:

                if grid[z][x - 1] == 0 or x == 0:
                    perim += 1

                if len_co - 1 == x or grid[z][x + 1] == 0:
                    perim += 1

                if grid[z - 1][x] == 0 or z == 0:
                    perim += 1

                if len_va - 1 == z or grid[z + 1][x] == 0:
                    perim += 1

    return perim
