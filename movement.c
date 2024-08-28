/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:38:16 by sepun             #+#    #+#             */
/*   Updated: 2024/08/28 20:52:24 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
        
    }
    
}