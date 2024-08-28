/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/08/28 22:08:38 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void ksort_3(t_list *top)
{
    int a;
    int b;
    // int c;
    
    a = top->content;
    b = top->next->content;
    // c = top->next->next->content;
    if (a > b)
    {
        ksort_2(top);
    }
    // if (/* condition */)
    // {
    //     /* code */
    // }
    
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

