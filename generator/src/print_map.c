/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** print_map
*/

#include "main.h"

void print_perfect_map(perfect_t *game)
{
    for (int i = 0; game->map[i] != NULL; i++) {
        printf("%s", game->map[i]);
        free(game->map[i]);
    }
    free(game->map);
}

void print_imperfect_map(imperfect_t *game)
{
    for (int i = 0; game->map[i] != NULL; i++) {
        printf("%s", game->map[i]);
        free(game->map[i]);
    }
    free(game->map);
}
