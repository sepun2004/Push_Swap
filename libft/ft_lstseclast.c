/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstseclast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:12:50 by sepun             #+#    #+#             */
/*   Updated: 2024/08/23 14:13:01 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstseclast(t_list *lst)
{
	t_list	*sec_last;

	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		sec_last = lst;
		lst = lst->next;
	}
	return (sec_last);
}