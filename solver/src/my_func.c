/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-bsdante-thomas.willson
** File description:
** my_func
*/

#include "solver.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

maze_t *createstruct(char *buffer, maze_t *maze, int size)
{
    maze = malloc(sizeof(maze_t *) * size);
    maze->tab = my_str_to_tab(buffer, size);
    maze->rows = my_rows(buffer);
    maze->cols = my_cols(buffer);
    maze->solution = malloc(sizeof(char **) * size);

    for (int i = 0; i < maze->rows; i++)
        maze->solution[i] = malloc(sizeof(char *) * maze->cols);
    for (int i = 0; i < maze->rows; i++)
        for (int j = 0; j < maze->cols; j++)
            maze->solution[i][j] = 0;
    return (maze);
}

char **my_str_to_tab(char *str, int size)
{
    char **tab = malloc(sizeof(char **) * size);
    int r = 0;
    int k = 0;

    for (int i = 0, j = 0; str[i] != '\0'; i++)
        if (str[i] == '\n' || str[i + 1] == '\0') {
            tab[j] = malloc(sizeof(char *) * size);
            j++;
        }
    for (int j = 0; str[k] != '\0'; k++, j++) {
        if (str[k] == '\n' ) {
            k++;
            r++;
            j = 0;
        }
        tab[r][j] = str[k];
    }
    return tab;
}

int my_cols(char *str)
{
    int count_n = 0;

    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++)
        count_n++;
    return count_n;
}

int my_rows(char *str)
{
    int count_n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i + 1] == '\0')
            count_n++;
    }
    return count_n;
}