/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** init_game
*/

#include "main.h"

void init_perfect_game(perfect_t *game, char const * const av[])
{
    game = malloc(sizeof(game));
    game->width = atoi(av[2]);
    game->lenght = atoi(av[1]);
    game->map = malloc_2d_map(game->width, game->lenght);
    file_perfect_map(game);
    binary_algorithm_perfect(game);
    print_perfect_map(game);
    free(game);
}

void init_imperfect_game(imperfect_t *game, char const * const av[])
{
    game = malloc(sizeof(game));
    game->width = atoi(av[2]);
    game->lenght = atoi(av[1]);
    game->map = malloc_2d_map(game->width, game->lenght);
    file_imperfect_map(game);
    binary_algorithm_imperfect(game);
    print_imperfect_map(game);
    free(game);
}
