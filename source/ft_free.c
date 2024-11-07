/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:01:35 by sepun             #+#    #+#             */
/*   Updated: 2024/11/07 19:55:27 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../include/push_swap.h"

void    free_array(char **strs)
{
    int i;

    i = 0;
    while (strs[i])
    {
        free(strs[i]);
        i++;
    }
    free(strs);
}

void    free_list(t_list *list1, t_list *list2)
{
    t_list *tmp1;
    t_list *tmp2;

    tmp1 = list1;
    if (tmp1)
    {
        while(tmp1)
        {
            tmp1 = tmp1->next;
            free(list1);
            list1 = tmp1; 
        }  
    }
    tmp2 = list2;
    if (tmp1)
    {
        while(tmp1)
        {
            tmp2 = tmp2->next;
            free(list2);
            list2 = tmp2; 
        }  
    }
}
