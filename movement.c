/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/08/28 21:25:56 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void ksort_3(t_list *top)
{
    if (top->content > top->next->content)
    {
        printf("el primero es mayor que el segundo\n");
        swap(&top);
    }
    if (top->content > top->next->next->content)
    {
        printf("el primero es mayor al ultimo\n");
        rotate(&top);
    }
    
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

