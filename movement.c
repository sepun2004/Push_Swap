/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/09/06 16:24:27 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_list **top)
{
	if (((*top) ->content) > ((*top)->next->content))
		{
			printf("top->content es mayor\n");
			swap(top, 'a');
		}
	printf("tiene 2 argumentos\n");
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
        printf("top in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
        
        swap(top,'a');
        printf("---------primer movimiento----------\n");
        printf("(*top) in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
        printf("caso 2 1 3\n");
        printf("-------------------------------------------\n");
    }
    else if ((firt_number < second_number) && (second_number > last_number) && (firt_number  > last_number))
    {
        printf("top in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
        reverse_rotate(top, 'a');
        printf("---------primer movimiento----------\n");
        printf("top in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
        printf("caso 2 3 1\n");
        printf("-------------------------------------------\n");
    }
    else if ((firt_number > second_number) && (second_number > last_number)
		&& (firt_number > last_number))
    {
		rotate_and_swap(top, 'a');
        printf("caso 3 2 1\n");
        printf("-------------------------------------------\n");
	}
    else if ((firt_number > second_number) && (second_number < last_number)
		&& (firt_number > last_number))
	{
        printf("top in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
    	rotate(top, 'a');
        printf("---------primer movimiento----------\n");
        printf("top in the posicion [1] es ==== %d\n", (*top)->content);
        printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
        printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	    printf("caso 3 1 2\n");
        printf("-------------------------------------------\n");

    }
    else if ((firt_number < second_number) && (second_number > last_number)
		&& (firt_number < last_number))
	{
    	swap_and_rotate(top, 'a');
        printf("caso 1 3 2\n");
        printf("-------------------------------------------\n");
    }
}

void sort_4(t_list **top, t_list **topB)
{
    t_list *aux;
    
    printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB)); 
    aux = smallest_number(top,  topB);
    // while (*top)
    // {
    while((*top)->content != aux->content)
    {
        rotate(top, 'a');
    }
    push(top, topB, 'a');
    printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB));
    sort_3(top);
    push(topB, top, 'b');
    // printf("el contenido de top es : %d\n", (*top)->content);
    // printf("el contenido de top es : %d\n", (*top)->next->content);
    // printf("el contenido de top es : %d\n", (*top)->next->next->content);
    // printf("el contenido de top es : %d\n", (*top)->next->next->next->content);
    printf("ft_lstsize despues del push top es : %d\n", ft_lstsize(*top));
    printf("ft_lstsize despues el push topB es : %d\n", ft_lstsize(*topB)); 
    // sort_3(*top);
    // printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    // printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB));
    // push(topB, top, 'b');
    // printf("ft_lstsize top es : %d\n", ft_lstsize(*top));
    // printf("ft_lstsize topB es : %d\n", ft_lstsize(*topB));
    // printf("sisoy\n");
}

void movement_the_list(t_list **top, t_list **head_list_B)
{
    if (ft_lstsize((*top)) == 2)
    {
        printf("--------- ft_lstsize es 2 ---------\n");
        sort_2(top);
    }
    else if(ft_lstsize((*top)) == 3)
    {
        printf("--------- ft_lstsize es 3 ---------\n");
        sort_3(top);
    }
    else if (ft_lstsize((*top)) == 4)
    {
        printf("--------- ft_lstsize es 3 ---------\n");
        sort_4(top, head_list_B);
    }
    
    
}

t_list  *smallest_number(t_list **top, t_list **topB)
{
    t_list *min_value;
    t_list *nodo;
    
    (void)top;
    min_value = NULL;
    nodo = (*top);
    printf("__ft_lstsize top dentro de la funcion es__: %d\n", ft_lstsize(*top));
    printf("__ft_lstsize topB dentro de la funcion es__ : %d\n", ft_lstsize(*topB)); 
    while (nodo)
    {
        if (nodo->index == 0)
        {
            min_value = nodo;   
        }
        nodo = nodo->next;
    }
    printf("ft_lstsize top dentro de la funcion es : %d\n", ft_lstsize(*top));
    printf("ft_lstsize topB dentro de la funcion es : %d\n", ft_lstsize(*topB));
    return(min_value);
    // push(&min_value, topB, 'a');
    // printf("ft_lstsize top dentro de la funcion despues del push es : %d\n", ft_lstsize(*top));
    // printf("ft_lstsize topB dentro de la funcion despues del psuh es : %d\n", ft_lstsize(*topB));
    // sort_3()

}