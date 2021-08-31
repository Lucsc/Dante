/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** file_map
*/

#include "main.h"

void file_perfect_map(perfect_t *game)
{
    int x = 0;
    int y = 0;

    for (x = 0; x < game->width; x++) {
        for (y = 0; y < game->lenght; y++) {
            game->map[x][y] = (!x || !y ? '*' : 'X');
        }
        game->map[x][y] = '\n';
        if (x == game->width - 1)
            game->map[x][game->lenght] = '\0';
    }
}

void file_imperfect_map(imperfect_t *game)
{
    int x = 0;
    int y = 0;

    for (x = 0; x < game->width; x++) {
        for (y = 0; y < game->lenght; y++) {
            game->map[x][y] = (!x || !y ? '*' : 'X');
        }
        game->map[x][y] = '\n';
        if (x == game->width - 1)
            game->map[x][game->lenght] = '\0';
    }
}