/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** my_sokoban
*/

#include "my.h"

int	file_size(char *filepath)
{
    int	size = 0;
    struct	stat	st;

    stat(filepath, &st);
    size = st.st_size;
    return (size);
}

int	number_of_lines(char *buffer)
{
    array_t	*d = malloc(sizeof(array_t));
    int	n = 0;

    d->nb_row = 0;
    while (buffer[n] != '\0') {
        if (buffer[n] == '\n') {
            d->nb_row++;
        }
        n++;
    }
    return (d->nb_row);
}

int	number_of_cols(char *buffer)
{
    array_t	*d = malloc(sizeof(array_t));
    int	n = 0;

    d->nb_col = 0;
    while (buffer[n] != '\n') {
        d->nb_col++;
        n++;
    }
    return (d->nb_col);
}

char	*read_file(char *filepath)
{
    array_t	*d = malloc(sizeof(array_t));
    int	size = file_size(filepath);
    int	fd = open(filepath, O_RDONLY);

    d->buffer = malloc(sizeof(char) * (size + 1));
    if (fd < 0 || size == 0) {
        exit (84);
    } else {
        read(fd, d->buffer, size);    
        close(fd);
        d->buffer[size + 1] = '\0';
    }
    return (d->buffer);
}

int	check_map(char *buffer)
{
    int	i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] != 'O' && buffer[i] != 'X' && \
            buffer[i] != ' ' && buffer[i] != '\n' && \
            buffer[i] != 'P' && buffer[i] != '#') {
            exit (84);
        }
        i++;
    }
    return (0);
}
