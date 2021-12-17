/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:27:24 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/17 11:17:21 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*read_file(int fd, char *hold_on, char *tmp_storage);
static char	*line_up(char *disorganized);
static char	*next_round(char *to_update);

/*
 * GNL will read a file with the amount of BUFFER_SIZE
 * and determine if it the string is a line or not. If
 * not, GNL will read the same amount again. It should return
 * the line that has just been read. If there's nothing else to read
 * it should return NULL
 */
char	*get_next_line(int fd)
{
	static char	*unforgettable = NULL;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	unforgettable = read_file(fd, unforgettable, buffer);
	if (!unforgettable)
		return (NULL);
	line = line_up(unforgettable);
	unforgettable = next_round(unforgettable);
	return (line);
}

/*
 * This function reads a file descriptor with read() and updates
 * the static variable with the buffer's contents
 */
static char	*read_file(int fd, char *hold_on, char	*tmp_storage)
{
	ssize_t		rd_byts;
	char		*aux;

	rd_byts = 1;
	while (rd_byts)
	{
		rd_byts = read(fd, tmp_storage, BUFFER_SIZE);
		if (rd_byts == -1)
		{
			free(tmp_storage);
			return (NULL);
		}
		tmp_storage[rd_byts] = '\0';
		if (!hold_on)
			hold_on = ft_strdup("");
		aux = hold_on;
		hold_on = ft_strjoin(aux, tmp_storage);
		if (ft_strchr(hold_on, '\n'))
			break ;
	}
	free(tmp_storage);
	return (hold_on);
}

/*
 * line_up() will just copy what was read to
 * the line, which is what GNL will return
 */
static char	*line_up(char *disorganized)
{
	size_t		i;
	char		*line;

	i = 0;
	while (disorganized[i] && disorganized[i] != '\n')
		i++;
	line = (char *)malloc((++i + 1) * (sizeof(char)));
	if (!line)
	{
		free(line);
		return (NULL);
	}
	ft_strlcpy(line, disorganized, i + 1);
	if (!line[0])
	{
		free(line);
		return (NULL);
	}
	return (line);
}

/*
 * The function next_round() will basically
 * deal with the remaining content
 */
static char	*next_round(char *to_update)
{
	int			i;
	char		*updated;

	i = 0;
	while (to_update[i] && to_update[i] != '\n')
		i++;
	if (!to_update[i])
	{
		free(to_update);
		return (NULL);
	}
	updated = (char *)malloc((ft_strlen(to_update) - i + 1) * sizeof(char));
	if (!updated)
	{
		free(updated);
		return (NULL);
	}
	ft_strlcpy(updated, to_update + i + 1, ft_strlen(to_update) - i + 1);
	free(to_update);
	return (updated);
}
