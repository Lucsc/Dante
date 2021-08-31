/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct perfect_s
{
    char **map;
    int width;
    int lenght;
} perfect_t;

typedef struct imperfect_s
{
    char **map;
    int width;
    int lenght;
} imperfect_t;

typedef struct xy_s
{
    int x;
    int y;
} xy_t;

#endif /* !STRUCT_H_ */