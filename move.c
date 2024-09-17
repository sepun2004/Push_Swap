/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:45:51 by sepun             #+#    #+#             */
/*   Updated: 2024/09/17 16:04:06 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **top, char x)
{
	t_list	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tmp = (*top)->next;
	(*top)->next = tmp->next;
	// printf("SS\n");
	tmp->next = *top;
	*top = tmp;
	if (x == 'a')
	{
		printf("sa\n");
	}else
	{
		printf("sb\n");
	}
	
}

void	push(t_list **src, t_list **dest, char x)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	ft_lstadd_front(dest, tmp);
	if (x == 'a')
		write(1, "pb\n", 3);
	else
		write(1, "pa\n", 3);
	
}

void	rotate(t_list **top, char x)
{
	t_list	*tail;
	t_list	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tmp = *top;
	*top = (*top)->next;
	tail = ft_lstlast(tmp);
	tail->next = tmp;
	tmp->next = NULL;
	if (x == 'a')
		write(1, "ra\n", 3);
	if (x == 'b')
		write(1, "rb\n", 3);
	else
		write(1, "rr\n", 3);	
}

void	reverse_rotate(t_list **top, char x)
{
	t_list	*tail;
	t_list	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tail = ft_lstlast(*top);
	tmp = ft_lstseclast(*top);
	tmp->next = NULL;
	tail->next = *top;
	*top = tail;
	if (x == 'a')
		write(1, "rra\n", 4);
	if (x == 'b')
		write(1, "rrb\n", 4);
	else
		write(1, "rrr\n", 4);	
}
