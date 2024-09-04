/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:09:51 by sepun             #+#    #+#             */
/*   Updated: 2024/09/04 20:22:14 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_and_rotate(t_list **top, char x)
{

    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	swap(top, x);
    printf("---------primer movimiento----------\n");
    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
    rotate(top, x);
    printf("---------segundo movimiento----------\n");
    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
}
void	rotate_and_swap(t_list **top, char x)
{
    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	rotate(top, x);
    printf("---------primer movimiento----------\n");
    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
	swap(top, x);
    printf("---------segundo movimiento----------\n");
    printf("top in the posicion [1] es ==== %d\n", (*top)->content);
    printf("top in the posicion [2] es ==== %d\n", (*top)->next->content);
    printf("top in the posicion [3] es ==== %d\n", (*top)->next->next->content);
}