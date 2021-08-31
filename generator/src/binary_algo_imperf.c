/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** willson_algo_imperf
*/

#include "main.h"

static void change_node(imperfect_t *game)
{
    game->map[1][1] = 'X';
    game->map[1][2] = '*';
    game->map[2][1] = '*';
    game->map[2][2] = '*';
    game->map[game->width - 1][game->lenght - 1] = '*';
    game->map[game->width - 1][game->lenght - 2] = '*';
    game->map[game->width - 1][game->lenght - 3] = '*';
    game->map[game->width - 2][game->lenght - 1] = '*';
    game->map[game->width - 2][game->lenght - 2] = 'X';
    game->map[game->width - 2][game->lenght - 3] = '*';
    game->map[game->width - 3][game->lenght - 1] = '*';
    game->map[game->width - 3][game->lenght - 2] = '*';
    game->map[game->width - 3][game->lenght - 3] = '*';
}

void binary_algorithm_imperfect(imperfect_t *game)
{
    for (int i = 2; i < game->width; i += 2) {
        for (int j = 2; j < game->lenght; j += 2) {
            game->map[i][j] = '*';
            if (j > 0 && game->map[i][j - 1] == 'X' && do_random(50) == true) {
                game->map[i][j - 1] = '*';
            } else
                game->map[i - 1][j] = '*';
        }
    }
    change_node(game);
}
