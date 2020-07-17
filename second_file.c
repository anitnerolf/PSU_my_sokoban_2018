/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_sokoban
*/

#include "my.h"

int	check_number(char *buffer)
{
    int	i = nb_obstacle(buffer);
    int	j = nb_x(buffer);
    int	k = nb_p(buffer);

    if (i != j || k != 1)
        return (1);
    return (0);
}

int	nb_p(char *buffer)
{
    int	i = 0;
    int	nb = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == 'P') {
            nb++;
        }
        i++;
    }
    return (nb);
}

int	nb_x(char *buffer)
{
    int	i = 0;
    int	nb = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == 'X') {
            nb++;
        }
        i++;
    }
    return (nb);
}

int	nb_obstacle(char *buffer)
{
    int	i = 0;
    int	nb = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == 'O') {
            nb++;
        }
        i++;
    }
    return (nb);
}

char	**allocate_memory(int line, int cols)
{
    char	**map = malloc(sizeof(char *) * line * cols + 1);
    int	i = 0;

    map[i] = malloc(sizeof(char *) * cols + 1);
    for (i = 0; i < line; i++)
        map[i] = malloc(sizeof(char) * cols + 1);
    map[i] = NULL;
    return (map);
}
