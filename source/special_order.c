/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:09:51 by sepun             #+#    #+#             */
/*   Updated: 2024/11/12 13:28:34 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_and_rotate(t_list **top, char x)
{
	swap(top, x);
	rotate(top, x);
}

void	rotate_and_swap(t_list **top, char x)
{
	rotate(top, x);
	swap(top, x);
}

void	reverse_rotate_a_b(t_list **stacks_a, t_list **stacks_b)
{
	reverse_rotate(stacks_a, 'x');
	reverse_rotate(stacks_b, 'x');
}

t_list  *smallest_number(t_list **top)
{
    t_list *min_value;
    t_list *nodo;
    int nose;

    
    min_value = NULL;
    nodo = (*top);
    nose = smallest_index(nodo)->index;
    while (nodo)
    {
        if (nodo->index == nose)
            min_value = nodo;   
        nodo = nodo->next;
    }
    return(min_value);
}

t_list *smallest_index(t_list *stack)
{
    t_list  *index;
    t_list  *tmp;

    tmp = stack;
    index = tmp;
    while(tmp->next != NULL)
    {
        if (index->index > tmp->next->index)
            index = tmp->next;
        tmp = tmp->next;
    }
    return(index);
}