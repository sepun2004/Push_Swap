/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkquers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:49:47 by sepun             #+#    #+#             */
/*   Updated: 2024/09/17 15:55:51 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_chars(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' &&
					argv[i][j] != '-' && argv[i][j] != '+')
			{
				return (-1);
			}
			if (!ft_isdigit(argv[i][j]) && ((argv[i][j] == '+' ||
			argv[i][j] == '-') && (!ft_isdigit(argv[i][j + 1]))))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_string(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (argv[i])
	{
		if (!ft_strlen(argv[i]))
			return (-1);
		j = 0;
		count = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
				count++;
			j++;
		}
		if (count == 0)
			return (-1);
		i++;
	}
	return (0);
}

void	ft_free_array(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

int	ft_check_limits(char **argv)
{
	char	**result;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		result = ft_split(argv[i], ' ');
		if (!result)
		{
			free(result);
			return (-1);
		}
		while (result[j] != NULL)
		{
			if (ft_atoll(result[j]) != ft_atoi(result[j]))
				return (-1);
			j++;
		}
		ft_free_array(result);
		i++;
	}
	return (0);
}

int	ft_check_duplicate(t_list *head_list, int num)
{
	t_list	*current;

	current = head_list;
	while (current)
	{
		if (current-> content == num)
			return (-1);
		current = current->next;
	}
	return (0);
}
