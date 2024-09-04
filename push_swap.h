/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:00:24 by sepun             #+#    #+#             */
/*   Updated: 2024/09/04 22:05:50 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>


// int number_of_arguments(int argc, t_list *top);
int	ft_check_string(char **argv);
int ft_check_chars(char **argv);
int ft_check_limits(char **argv);
int ft_check_duplicate(t_list *head_list, int num);
char **check_error(char **argv/*, int argc*/);
int main(int argc, char **argv);
void  index_num(t_list *top);

//move
void	swap(t_list **top, char x);
void	push(t_list **src, t_list **dest, char x);
void	rotate(t_list **top, char x);
void reverse_rotate(t_list **top, char x);
t_list *number_of_arguments(t_list *top);

//movement_the_list
void movement_the_list(t_list *head_list_A, t_list *head_list_B);
void sort_2(t_list *top);
void sort_3(t_list *top);
void sort_4(t_list *top, t_list *topB);

// order
void	swap_and_rotate(t_list **top, char x);
void	rotate_and_swap(t_list **top, char x);
//movement
t_list  smallest_number(t_list *top);

#endif