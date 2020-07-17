/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** PSU_my_sokoban_2018
*/

#include "my.h"

void	usage_h(void)
{
    my_putstr("USAGE\n");
    my_putstr(" ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr(" map  file representing the warehouse map, ");
    my_putstr("containing '#' for walls,\n");
    my_putstr(" 'P' for the player, 'X' for boxes and '0' ");
    my_putstr("for storage locations.\n");
}
