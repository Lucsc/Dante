/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** error_usage
*/

#include "main.h"

void syntax_error(void)
{
    const char *usage = "USAGE:\n";
    const char *generator = "     ./generator/generator ";
    const char *syntax = "[x] [y] [perfect].\n";

    write(1, usage, strlen(usage));
    write(1, generator, strlen(generator));
    write(1, syntax, strlen(syntax));
    return ;
}

void numbers_error(void)
{
    const char *usage = "USAGE:\n";
    const char *number = "      [x] and [y] must be (positive) numbers.\n";

    write(1, usage, strlen(usage));
    write(1, number, strlen(number));
    return ;
}