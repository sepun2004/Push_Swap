/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/09/23 14:55:45 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_list **top)
{
	if (((*top) ->content) > ((*top)->next->content))
		swap(top, 'a');
}


void sort_3(t_list **top)
{ 
    int firt_number;
    int second_number;
    int last_number;

    firt_number = (*top)->content;
    second_number = (*top)->next->content;
    last_number = (*top)->next->next->content;

    if ((firt_number > second_number) && (second_number < last_number) && (firt_number < last_number))
        swap(top,'a');
    else if ((firt_number < second_number) && (second_number > last_number) && (firt_number  > last_number))        
        reverse_rotate(top, 'a');
    else if ((firt_number > second_number) && (second_number > last_number)
		&& (firt_number > last_number))
		rotate_and_swap(top, 'a');
    else if ((firt_number > second_number) && (second_number < last_number)
		&& (firt_number > last_number))
    	rotate(top, 'a');
    else if ((firt_number < second_number) && (second_number > last_number)
		&& (firt_number < last_number))
    	swap_and_rotate(top, 'a');
}

void sort_4(t_list **top, t_list **topB)
{
    t_list *aux;

    aux = smallest_number(top);
    while((*top)->content != aux->content)
        rotate(top, 'a');
    push(top, topB, 'a');
    sort_3(top);
    push(topB, top, 'b');
}

void sort_5(t_list **top, t_list **topB)
{
    t_list *aux;

    
    aux = smallest_number(top);
    while((*top)->content != aux->content)
        rotate(top, 'a');
    push(top, topB, 'a');
    sort_4(top, topB);
    push(topB,top, 'b');
}

void movement_the_list(t_list **head_list_A, t_list **head_list_B)
{
    if (ft_lstsize((*head_list_A)) == 2)
        sort_2(head_list_A);
    else if(ft_lstsize((*head_list_A)) == 3)
        sort_3(head_list_A);
    else if (ft_lstsize((*head_list_A)) == 4)
        sort_4(head_list_A, head_list_B);
    else if (ft_lstsize((*head_list_A)) == 5)
        sort_5(head_list_A, head_list_B);
    else if (ft_lstsize(*head_list_A) >= 6)
    {
        k_sort1(head_list_A, head_list_B, ft_lstsize(*head_list_A));
        k_sort2(head_list_A, head_list_B, ft_lstsize(*head_list_B));
    }   
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
