/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** ccheck check_signal
*/

#include "mysh.h"

int check_signal(int status)
{
    if (status == 256)
        return (1);
    if (WTERMSIG(status) == SIGSEGV)
        my_printf("Segmentation fault");
    else if (WTERMSIG(status) == SIGFPE)
        my_printf("Floating exception");
    if (WCOREDUMP(status))
        my_printf(" (core dumped)\n");
    else
        (status > 1) ? my_printf("\n") : 0;
    return (status);
}
