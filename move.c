/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:45:51 by sepun             #+#    #+#             */
/*   Updated: 2024/09/17 12:16:34 by sepun            ###   ########.fr       */
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
	{
		printf("no hay nada que pushear\n");
		return ;
	}
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	printf("el nodo cone el contenido [%d] y el index '%d', se paso al la lista\n", tmp->content, tmp->index);
	ft_lstadd_front(dest, tmp);
    // printf("----------ft_lstsize despues del push top es : %d\n", ft_lstsize(*src));
	if (x == 'a')
	{
		printf("pb\n");
	}else
	{
		printf("pa \n");
	}
	
}

void	rotate(t_list **top, char x)
{
	printf("haceeeeeeeee rotateeeeeeeeeeeeeee\n");
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
	{
		printf("ra\n");
	}else
	{
		printf("rb\n");
	}
	
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
	{
		printf("rra\n");
	}else
	{
		printf("rrb\n");
	}
	
}
