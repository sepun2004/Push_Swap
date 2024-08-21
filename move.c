/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:45:51 by sepun             #+#    #+#             */
/*   Updated: 2024/08/21 21:18:08 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *top)
{
	int	tmp;

	if (top == NULL || top->next == NULL)
		return ;
	tmp = top->content;
	top->content = top->next->content;
	top->next->content = tmp;
}

void	push(t_list **src, t_list **dest)
{	
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	ft_lstadd_front(dest, tmp);
}

void	rotate(t_list **top)
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
}
// void reverse(t_list **top)
// {
// 	t_list *tmp;
// 	t_list *tail;

// 	if (*top == NULL || (*top)->next == NULL)
// 		return ;
// 	tmp = *top;
// 	tail = ft_lstlast(tmp);
// 	ft_lstadd_front(&tail, tmp);
// }
void	reverse_rotate(t_list **top)
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
}
