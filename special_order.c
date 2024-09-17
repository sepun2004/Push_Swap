/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:09:51 by sepun             #+#    #+#             */
/*   Updated: 2024/09/17 16:12:43 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_and_rotate(t_list **top, char x)
{
	swap(top, x);
	rotate(top, x);
}

void	rotate_and_swap(t_list **top, char x)
{
	rotate(top, x);
	swap(top, x);
}

void	reverse_rotate_a_b(t_list **stacks_a, t_list **stacks_b)
{
	reverse_rotate(stacks_a, 'x');
	reverse_rotate(stacks_b, 'x');
}
