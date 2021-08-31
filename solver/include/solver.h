/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#include "struct.h"

char **my_str_to_tab(char *str, int size);
int my_rows(char *str);
size_t my_strlen(char *str);
int solve_maze(int r, int c, maze_t *maze);
int my_cols(char *str);
maze_t *createstruct(char *buffer, maze_t *maze, int size);
void my_putchar(char c);
void print_solution(maze_t *maze);
int display_buffer(char *buffer, int size);

#endif /* !SOLVER_H_ */