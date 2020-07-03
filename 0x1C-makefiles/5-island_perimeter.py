#!/usr/bin/python3
"""5-island_perimeter.py module"""

def island_perimeter(grid):
    """
    island_perimeter:
    -----------------
    Returns sum of perimeter of
    shapes formed only with 1's.

    Variables:
    ----------
    rows [int] -- number of rows in the grid.
    cols [int] -- number of colums in the grid.
    perimeter [int] -- calculated perimeter.
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    # checking every position to find land portions (1's).
    for i in range(0, rows):
        for j in range(0, cols):
            if grid[i][j] == 1:
                perimeter += (4 - contiguous_cells(grid, i, j, rows, cols))

    return perimeter


def contiguous_cells(grid, i, j, rows, cols):
    """
    contiguous_cells:
    -----------------
    it counts how many contiguous land cells are
    in all the 4 limits of that actual position.

    Variables:
    ----------
    grid [list] -- a rectangular matrix (list of lists).
    i [int] -- coordinate for rows.
    j [int] -- coordinate for cols.
    rows [int] -- amount of rows.
    cols [int] -- amount of cols.
    counter [int] -- num. of sides to be discounted.
    """

    counter = 0

    # amount of island cells upper.
    if (i > 0 and grid[i - 1][j]):
        counter += 1

    # amount of island cells to the left.
    if (j > 0 and grid[i][j - 1]):
        counter += 1

    # amount of island cells down.
    if (i < rows - 1 and grid[i + 1][j]): 
        counter += 1

    # amount of island cells to the right.
    if (j < cols - 1 and grid[i][j + 1]):
        counter += 1

    return counter
