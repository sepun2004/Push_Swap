/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/09/11 20:49:02 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_list **top)
{
	if (((*top) ->content) > ((*top)->next->content))
		{
			// printf("top->content es mayor\n");
			swap(top, 'a');
		}
	// printf("tiene 2 argumentos\n");
	// return(top);
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
    {        
        swap(top,'a');
    }
    else if ((firt_number < second_number) && (second_number > last_number) && (firt_number  > last_number))
    {
        
        reverse_rotate(top, 'a');
    }
    else if ((firt_number > second_number) && (second_number > last_number)
		&& (firt_number > last_number))
    {
		rotate_and_swap(top, 'a');
	}
    else if ((firt_number > second_number) && (second_number < last_number)
		&& (firt_number > last_number))
	{
    	rotate(top, 'a');

    }
    else if ((firt_number < second_number) && (second_number > last_number)
		&& (firt_number < last_number))
	{
    	swap_and_rotate(top, 'a');
    }
}

void sort_4(t_list **top, t_list **topB)
{
    t_list *aux;
    

    // printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    // printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB)); 
    aux = smallest_number(top);
    // printf("aux dentro de sort_4 es : %d\n", aux->content);
    while((*top)->content != aux->content)
    {
        rotate(top, 'a');
    }
    push(top, topB, 'a');
    // print_list((*topB));
    // printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    // printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB));
    sort_3(top);
    push(topB, top, 'b');
}

void sort_5(t_list **top, t_list **topB)
{
    t_list *aux;

    
    aux = smallest_number(top);
    // printf("aux es :%d\n", aux->content);
    while((*top)->content != aux->content)
    {
        rotate(top, 'a');
    }
    push(top, topB, 'a');
    sort_4(top, topB);
    push(topB,top, 'b');
}

void movement_the_list(t_list **head_list_A, t_list **head_list_B)
{
    if (ft_lstsize((*head_list_A)) == 2)
    {
        printf("--------- ft_lstsize es 2 ---------\n");
        sort_2(head_list_A);
    }
    else if(ft_lstsize((*head_list_A)) == 3)
    {
        printf("--------- ft_lstsize es 3 ---------\n");
        sort_3(head_list_A);
    }
    else if (ft_lstsize((*head_list_A)) == 4)
    {
        printf("--------- ft_lstsize es 4 ---------\n");
        sort_4(head_list_A, head_list_B);
    }
    else if (ft_lstsize((*head_list_A)) == 5)
    {
        printf("--------- ft_lstsize es 5 ---------\n");
        sort_5(head_list_A, head_list_B);
    }
    else if (ft_lstsize(*head_list_A) >= 6)
    {
        printf("--------- ft_lstsize es 6 o mas ---------\n");
        k_sort1(head_list_A, head_list_B, ft_lstsize(*head_list_A));
        printf("Salio de K_sort 1 ");
        k_sort2(head_list_A, head_list_B, ft_lstsize(*head_list_A));       
        printf("Salio de K_sort 2");
    }
    
    
    
}

t_list  *smallest_number(t_list **top)
{
    t_list *min_value;
    t_list *nodo;
    int nose;
    // t_list *tmp;

    
    min_value = NULL;
    nodo = (*top);
    nose = smallest_index(nodo)->index;
    while (nodo)
    {
        // printf("\n----------smallest_index(nodo)->index es ----------%d\n", smallest_index(nodo)->index);
        if (nodo->index == nose)
        {
            min_value = nodo;   
        }
        nodo = nodo->next;
    }
    // printf("la funcion smallest_number retorna %d\n", min_value->content);
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
        {
            index = tmp->next;
        }
        tmp = tmp->next;
    }
    return (index);
}