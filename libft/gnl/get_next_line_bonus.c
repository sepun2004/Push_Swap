/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:05:27 by sepun             #+#    #+#             */
/*   Updated: 2024/07/05 14:20:59 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*the_rest_in_the_new_line(char *next)
{
	char	*next_line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (next[i] != '\n' && next[i] != '\0')
		i++;
	if (next[i] == '\0')
	{
		free(next);
		return (NULL);
	}
	i++;
	next_line = ft_calloc(sizeof(char), (ft_strlen(next) - i + 1));
	if (!next_line)
		return (NULL);
	while (next[i] != '\0')
		next_line[j++] = next[i++];
	next_line[j] = '\0';
	free(next);
	return (next_line);
}

char	*make_line(char *next)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	if (next[i] == '\0')
		return (NULL);
	while (next[i] != '\0' && next[i] != '\n')
		i++;
	if (next[i] == '\n')
		line = ft_calloc(sizeof(char), i + 2);
	else
		line = ft_calloc(sizeof(char), i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		line[j] = next[j];
		j++;
	}
	return (line);
}

char	*read_fd_n(int fd, char *next)
{
	int		amount;
	char	*temp;
	char	*aux;

	temp = ft_calloc(BUFFER_SIZE + 1, 1);
	if (!temp)
		return (NULL);
	amount = 1;
	while (amount > 0 && !ft_strchr(next, '\n'))
	{
		amount = read(fd, temp, BUFFER_SIZE);
		if (amount == -1)
			return (free(temp), free(next), NULL);
		if (amount == 0)
			break ;
		temp[amount] = '\0';
		aux = next;
		next = ft_strjoin(next, temp);
		if (!next)
			return (free(temp), free(next), NULL);
		free(aux);
	}
	return (free(temp), next);
}

char	*get_next_line(int fd)
{
	char		*final;
	static char	*next[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free (next[fd]);
		next[fd] = NULL;
		return (NULL);
	}
	next[fd] = read_fd_n(fd, next[fd]);
	if (!next[fd])
		return (NULL);
	final = make_line(next[fd]);
	if (!final)
	{
		free(next[fd]);
		next[fd] = NULL;
		return (NULL);
	}
	next[fd] = the_rest_in_the_new_line(next[fd]);
	return (final);
}
