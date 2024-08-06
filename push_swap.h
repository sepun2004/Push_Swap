/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:00:24 by sepun             #+#    #+#             */
/*   Updated: 2024/08/05 16:00:17 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct list
{
    int content;
    struct list *next;
    
}t_lista;


int	ft_check_string(char **argv);
int ft_check_chars(char **argv);
int ft_check_limits(char **argv);
int ft_check_duplicate(char **argv);
char **check_error(char **argv/*, int argc*/);
int main(int argc, char **argv);
#endif
