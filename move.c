/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:45:51 by sepun             #+#    #+#             */
/*   Updated: 2024/08/15 18:11:55 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *top)
{
	int	tmp;

	if (top == NULL || top->next == NULL)
		return ;
	tmp = top->content;
	top->content = top->next->content;
	top->next->content = tmp;
}
