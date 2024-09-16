/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:35:27 by sepun             #+#    #+#             */
/*   Updated: 2024/09/13 23:16:19 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Ksort algorithm
void	k_sort1(t_list **stack_a, t_list **stack_b, int length)
{
	printf("------------------ingreso a k_sort1------------------\n");
	int	i;
	int	range;

	i = 0;
	printf("len es  : %d \n", length);
	range = (ft_sqrt(length) * 14) / 10;
	printf("el rango es : %d\n", range);
	while ((*stack_a))
	{
		printf("el contenido del index es : %d\n", (*stack_a)->index);
		printf("i es  : %d\n", i);
		printf("i == %d + rango == %d \n", i, range);
		if ((*stack_a)->index <= i)
		{
			printf("hace push del stack a al stack b , codigo de linea 30\n");
			push(stack_a, stack_b, 'a');
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			
			printf("hace push del stack a al stack b , codigo de linea 37\n");
			push(stack_a, stack_b, 'a');
			i++;
			if (((*stack_b)->index > i + range))
			{
				printf("hace reverse rotate a b, codigo de linea 41\n");
				reverse_rotate_a_b(stack_a, stack_b);
			}
			else
			{
				printf("reverse rotate del stack b , codigo de linea 46\n");
				reverse_rotate(stack_b, 'b');
			}
		}
		else
			rotate(stack_a, 'a');
	}
	// print_list()
}

void	k_sort2(t_list **stack_a, t_list **stack_b, int length)
{
	printf("------------------ingreso a k_sort2------------------\n");
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		printf("length es : %d\n", length);
		rb_count = count_r(*stack_b, length - 1) ;
		rrb_count = length - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != length - 1)
			{
				printf("hace rotate en el stack b, codigo de linea 70");
				rotate(stack_b, 'b');
			}
			printf("hace push del stack a al stack b, codigo de linea 73\n");
			push(stack_a, stack_b, 'b');
			length--;
		}
		else
		{
			while ((*stack_b)->index != length - 1)
			{
				printf("hace reverse rotate en el stack b, codigo de linea 81");
				reverse_rotate(stack_b, 'b');
			}
			printf("hace push del stack a al stack b, codigo de linea 84\n");
			push(stack_a, stack_b, 'b');
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