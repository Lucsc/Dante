/*
** EPITECH PROJECT, 2021
** Delivery
** File description:
** solve
*/

#include "solver.h"

void print_map(maze_t *maze, int i, int j)
{
    if (maze->solution[i][j] == 'o')
        my_putchar(maze->solution[i][j]);
    else
        my_putchar(maze->tab[i][j]);
}

void print_solution(maze_t *maze)
{
    for (int i = 0; i < maze->rows; i++) {
        for (int j = 0; j < maze->cols; j++)
            print_map(maze, i, j);
        if (i < maze->rows - 1)
            my_putchar('\n');
    }
}

int solve_maze(int r, int c, maze_t *maze)
{
    if ((r == maze->rows - 1) && (c == maze->cols - 1)) {
        maze->solution[r][c] = 'o';
        return 1;
    }
    if (r >= 0 && c >= 0 && r < maze->rows && c < maze->cols &&
        maze->solution[r][c] == 0 && maze->tab[r][c] == '*') {
        maze->solution[r][c] = 'o';
        if (solve_maze(r + 1, c, maze) || solve_maze(r, c + 1, maze) ||
            solve_maze(r - 1, c, maze) || solve_maze(r, c - 1, maze))
            return 1;
        maze->solution[r][c] = 0;
        return 0;
    }
    return 0;
}
