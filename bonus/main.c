/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_sokoban
*/

#include "my.h"

int	main(int ac, char **av)
{
    array_t	*d = malloc(sizeof(array_t));

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            usage_h();
            return (0);
        }
        d->buffer = read_file(av[1]);
        check_map(d->buffer);
        if (check_number(d->buffer) == 1)
            exit (84);
        d->ptr = double_array(d->buffer);
        use_ncurses(d->ptr);
        return (0);
    }
    exit (84);
}
