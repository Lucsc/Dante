/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct maze_s {
    char **tab;
    char **solution;
    int rows;
    int cols;
} maze_t;

#endif /* !STRUCT_H_ */