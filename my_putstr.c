/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_putstr
*/

#include <unistd.h>
#include "include/my.h"

int	my_putstr(char const *str)
{
    int	i = 0;

    if (str != NULL) {
        while(str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    }
    return (0);
}
