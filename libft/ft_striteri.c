/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:29:03 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 17:21:12 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void print_index_char(unsigned int index, char *c) {
    printf("Índice: %u, Carácter: %c\n", index, *c);
}

int main() {
    char str[] = "Ejemplo";

    ft_striteri(str, print_index_char);

    return 0;
}*/
