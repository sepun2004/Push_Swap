/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/08/30 16:16:10 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void ksort_3(t_list *top)
{ 

    if (top->index == 0 && top->next->index != 1 && top->next->next->index != 2)
    {
        top = top->next;
        printf("top es == %d\n", top->content);
        swap(&top);
        printf("top es == %d\n", top->content);
        printf("caso 1 3 2\n");
    }
    
    if (top->index != 0 && top->next->index != 1 && top->next->next->index == 2)
    {
        swap(&top);
        printf("caso 2 1 3\n");
    }
    if (top->index != 0 && top->next->index != 1 && top->next->next->index != 2)
    {
        printf("-------------------------------------------\n");
        // swap(&top);
        printf("ya hizo swap\n");
        // rotate(&top);
        printf("top in the posicion [1] es ==== %d\n", top->content);
        printf("top in the posicion [2] es ==== %d\n", top->next->content);
        printf("top in the posicion [3] es ==== %d\n", top->next->next->content);
        printf("---------segundo movimiento----------\n");
        reverse_rotate(&top);
        printf("top in the posicion [1] es ==== %d\n", top->content);
        printf("top in the posicion [2] es ==== %d\n", top->next->content);
        printf("top in the posicion [3] es ==== %d\n", top->next->next->content);
        printf("caso 2 3 1\n");
        printf("-------------------------------------------\n");

    }
    if (top->index != 0 && top->next->index == 1 && top->next->next->index != 2)
    {
        printf("-------------------------------------------\n");
        // swap(&top);
        // printf("ya hizo swap\n");
        printf("top in the posicion [1] es ==== %d\n", top->content);
        printf("top in the posicion [2] es ==== %d\n", top->next->content);
        printf("top in the posicion [3] es ==== %d\n", top->next->next->content);
        printf("---------primer movimiento----------\n");
        swap(&top);
        printf("top in the posicion [1] es ==== %d\n", top->content);
        printf("top in the posicion [2] es ==== %d\n", top->next->content);
        printf("top in the posicion [3] es ==== %d\n", top->next->next->content);
        printf("---------segundo movimiento----------\n");
        reverse_rotate(&top);
        printf("top in the posicion [1] es ==== %d\n", top->content);
        printf("top in the posicion [2] es ==== %d\n", top->next->content);
        printf("top in the posicion [3] es ==== %d\n", top->next->next->content);
        printf("3 2 1\n");
        printf("-------------------------------------------\n");
    }
    
    
    
    
// // printf("1 2 3 _______ Perfect\n");
printf("1 3 2 _______ swap in 3 and 2\n");
printf("2 1 3 _______ swap in 2 and 1\n");
printf("2 3 1 _______ swap in 2 and 1 also rotate un the posicion 1 and 3 \n");
printf("3 2 1 _______ rotate in 3 and 1\n");
// printf("3 1 2 _______ rotate in 3 and 2 and swap the posicion 1 and 2\n");
}



void movement_the_list(t_list *top)
{
    if (ft_lstsize(top) == 2)
    {
        printf("--------- ft_lstsize es 2 ---------\n");
        ksort_2(top);
    }
    else if(ft_lstsize(top) == 3)
    {
        printf("--------- ft_lstsize es 3 ---------\n");
        ksort_3(top);
    }
    
}

