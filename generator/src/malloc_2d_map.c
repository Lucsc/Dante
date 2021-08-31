/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** malloc_2d_map
*/

#include "main.h"

char **malloc_2d_map(int lines, int cols)
{
    char **map = malloc(sizeof(char *) * (lines + 1));
    int x = 0;

    for (x = 0; x < lines; x++) {
        map[x] = malloc(sizeof(char) * (cols + 1));
        if (map[x] == NULL)
            return NULL;
    }
    if (map == NULL)
        return NULL;
    map[x] = NULL;
    return map;
}
