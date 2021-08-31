/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-bsdante-thomas.willson
** File description:
** my
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#include "struct.h"
#include "const.h"

/*** PERFECT GAME ***/
void file_perfect_map(perfect_t *game);
void print_perfect_map(perfect_t *game);
void binary_algorithm_perfect(perfect_t *game);
void init_perfect_game(perfect_t *game, char const * const av[]);

/*** IMPERFECT GAME ***/
void file_imperfect_map(imperfect_t *game);
void print_imperfect_map(imperfect_t *game);
void binary_algorithm_imperfect(imperfect_t *game);
void init_imperfect_game(imperfect_t *game, char const * const av[]);

/*** ERROR HANDLING ***/
void numbers_error(void);
void syntax_error(void);
int error_handling(int ac, char const * const av[]);

/*** RANDOM ***/
bool do_random(int i);

/*** MALLOC GAME ***/
char **malloc_2d_map(int width, int lenght);

#endif /* !MAIN_H_ */
