/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:03:16 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 19:20:58 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hell World!";
    unsigned int n = 13; // Número de caracteres a comparar

    int result = ft_strncmp(str1, str2, n);

    if (result == 0)
        printf("son iguales %u\n", n);
    else if (result < 0)
        printf("str1 es menor que str2 %u\n", n);
    else
        printf("str1 es mayor que str2 %u\n", n);

    return 0;
}*/
