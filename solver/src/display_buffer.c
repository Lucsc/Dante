/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** display_buffer
*/

#include "solver.h"

int display_buffer(char *buffer, int size)
{
    maze_t *maze = createstruct(buffer, maze, size);

    if (solve_maze(0,0, maze))
        print_solution(maze);
    for (int i = 0; maze->tab[i] != NULL; i++) {
        free(maze->tab[i]);
        free(maze->solution[i]);
    }
    free(maze->solution);
    free(maze->tab);
    free(maze);
    return 0;
}