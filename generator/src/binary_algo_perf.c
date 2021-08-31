/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** rest
*/

#include "main.h"

static void change_perfect(perfect_t *game)
{
    game->map[game->width - 1][game->lenght - 1] = '*';
    game->map[game->width - 1][game->lenght - 2] = '*';
}

void binary_algorithm_perfect(perfect_t *game)
{
    for (int i = 2; i < game->width; i += 2) {
        for (int j = 2; j < game->lenght; j += 2) {
            game->map[i][j] = '*';
            if (j > 0 && game->map[i - 1][j] == 'X' && do_random(50) == true)
                game->map[i - 1][j] = '*';
            else
                game->map[i][j - 1] = '*';
        }
    }
    change_perfect(game);
}
