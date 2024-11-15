/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:08:48 by sepun             #+#    #+#             */
/*   Updated: 2024/07/10 13:08:48 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	proccess(char **argv, t_list **headA, t_list **tmp_list, char **str)
{
	int		j;
	int		i;

	i = 0;
	while (argv[++i] != NULL)
	{
		j = 0;
		if (check_error(argv) == NULL)
			return ;
		str = ft_split(argv[i], ' ');
		while (str[j] != NULL)
		{
			if (ft_check_duplicate(*headA, ft_atoi(str[j])) == -1)
				return ;
			*tmp_list = ft_lstnew(ft_atoi(str[j]));
			if (*tmp_list == NULL)
			{
				free_list(*tmp_list, *headA);
				return ;
			}
			ft_lstadd_back(headA, *tmp_list);
			j++;
		}
		free_array(str);
	}
}

void	index_num(t_list **top)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (*top);
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->content > tmp2->content)
				tmp1->index++;
			else
				tmp2->index++;
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

char	**check_error(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ft_check_chars(argv, i, j) == -1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	if (ft_check_string(argv) == -1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	if (ft_check_limits(argv, i, j) == -1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	t_list	*head_list_a;
	t_list	*tmp_list;
	t_list	*head_list_b;
	char	**str;

	head_list_a = NULL;
	tmp_list = NULL;
	head_list_b = NULL;
	str = NULL;
	if (argc < 2)
		return (0);
	proccess(argv, &head_list_a, &tmp_list, str);
	index_num(&head_list_a);
	movement_the_list(&head_list_a, &head_list_b);
	free_list(head_list_a, head_list_b);
	return (0);
}
