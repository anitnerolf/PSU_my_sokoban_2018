/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_sokoban
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <curses.h>

typedef	struct	array
{
    int	i;
    int	j;
    int	k;
    int	nb_col;
    int	nb_row;
    char	*buffer;
    char	**ptr;
} array_t;

int	number_of_lines(char *buffer);
int	number_of_cols(char *buffer);
char	*read_file(char *filepath);
int	check_map(char *buffer);
int	my_putstr(char const *str);
void	usage_h(void);
int	check_number(char *buffer);
char	**double_array(char *buffer);
void	my_putchar(char c);
int	use_ncurses(char **ptr);
int	nb_p(char *buffer);
int	nb_x(char *buffer);
int	nb_obstacle(char *buffer);
char	**allocate_memory(int line, int cols);

#endif /* MY_H_ */
