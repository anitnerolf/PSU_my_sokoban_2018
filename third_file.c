/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_sokoban
*/

#include "my.h"

array_t	*array(array_t *d)
{
    d = malloc(sizeof(array_t));
    d->i = 0;
    d->j = 0;
    d->k = 0;
    return (d);
}

char	**double_array(char *buffer)
{
    array_t	*d = malloc(sizeof(array_t));

    d = array(d);
    d->nb_col = number_of_cols(buffer);
    d->nb_row = number_of_lines(buffer);
    d->ptr = allocate_memory(d->nb_row, d->nb_col);
    while (buffer[d->k] != '\0' && d->i < d->nb_row) {
        d->ptr[d->i] = malloc(sizeof(char) * d->nb_col + 1);
        while (buffer[d->k] != '\n') {
            d->ptr[d->i][d->j] = buffer[d->k];
            d->j++;
            d->k++;
        }
        d->k++;
        d->ptr[d->i][d->j] = '\0';
        d->j = 0;
        d->i++;
    }
    d->ptr[d->i] = NULL;
    return (d->ptr);
}

void	start_game(char **ptr)
{
    int	i = 0;
    i = use_ncurses(ptr);
}

int	game(char **ptr)
{
    int	i = 0;
    int	key = 0;
    int	j = 0;

    while (key != 32) {
        while (ptr[i] != NULL) {
            mvprintw(j++, 0, ptr[i]);
            i++;
        }
        key = getch();
    }
    use_ncurses(ptr);
    return (0);
}

int	use_ncurses(char **ptr)
{
    int	i = 0;
    int	j = 0;
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);
    while (ptr[i][j] != 'P') {
        i++;
        j++;
        game(ptr);
    }
    refresh();
    endwin();
    return (0);
}
