/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:35:27 by sepun             #+#    #+#             */
/*   Updated: 2024/09/17 12:11:32 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Ksort algorithm
void	k_sort1(t_list **stack_a, t_list **stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while ((*stack_a))
	{
	printf("el rango es : %d\n", range);
	printf("la i es : %d\n", i);
		if ((*stack_a)->index <= i)
		{
			push(stack_a, stack_b, 'a');
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			push(stack_a, stack_b, 'a');
			i++;
			if (((*stack_a)->index > i + range))
				reverse_rotate_a_b(stack_a, stack_b);
			else
				rotate(stack_b, 'b');
		}
		else
			rotate(stack_a, 'a');
	}
}

void	k_sort2(t_list **stack_a, t_list **stack_b, int length)
{
	printf("entro en k_sort2\n");
	printf("el length es : %d\n", length);
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(*stack_b, length - 1);
		rrb_count = length - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != length - 1)
				rotate(stack_b, 'b');
			push(stack_b, stack_a, 'b');
			length--;
		}
		else
		{
			while ((*stack_b)->index != length - 1)
				reverse_rotate(stack_b,'b');
			push(stack_b, stack_a, 'b');
			length--;
		}
	}
}
int	count_r(t_list *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}