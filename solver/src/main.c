/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-bsdante-thomas.willson
** File description:
** main
*/

#include "solver.h"

static int invalid_buffer(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'X' && buffer[i] != '*' &&
            buffer[i] != '\n' && buffer[i] != '\0')
            return 84;
    }
    return 0;
}

static int hand_error(char *buffer)
{
    if (buffer == NULL)
        return 84;
    if (invalid_buffer(buffer) == 84)
        return 84;
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[0] == 'X' || (buffer[i] == 'X' && buffer[i + 1] == '\0'))
            return 84;
    return 0;
}

char *fs_open_file(char const *filepath, struct stat *sb)
{
    char *buffer = NULL;
    int rd = 0;

    stat(filepath, sb);
    buffer = malloc(sizeof(char) * sb->st_size + 1);
    if (buffer == NULL)
        return NULL;
    rd = read(open(filepath, O_RDONLY), buffer, sb->st_size);
    if (rd <= 0)
        return NULL;
    close(rd);
    return buffer;
}

int main(int ac, char **av)
{
    struct stat sb;
    char *buffer = NULL;

    if (ac != 2)
        return 84;
    buffer = fs_open_file(av[1], &sb);
    if (hand_error(buffer) == 84)
        return 84;
    display_buffer(buffer, sb.st_size);
    free(buffer);
    return 0;
}