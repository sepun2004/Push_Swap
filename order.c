/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:09:51 by sepun             #+#    #+#             */
/*   Updated: 2024/09/23 12:34:25 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_and_rotate(t_list **top, char x)
{
    //printf("swap and rotate\n");

    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	swap(top, x);
    // printf("---------primer movimiento----------\n");
    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
    rotate(top, x);
    // printf("---------segundo movimiento----------\n");
    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
}
void	rotate_and_swap(t_list **top, char x)
{
   // printf("rotate and swap \n");
    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	rotate(top, x);
    // printf("---------primer movimiento----------\n");
    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	swap(top, x);
    // printf("---------segundo movimiento----------\n");
    // printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    // printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    // printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
}

void reverse_rotate_a_b(t_list **stacks_a, t_list **stacks_b)
{
    reverse_rotate(stacks_a, 'a');
	reverse_rotate(stacks_b, 'b');
}

void	rotate_both(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a, 'a'/*FALSE*/);
	rotate(stack_b, 'b'/*FALSE*/);
	// write(1, "rr\n", 3);
}