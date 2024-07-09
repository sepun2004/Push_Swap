/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:15:24 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 13:21:12 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	charac;

	str = (unsigned char *)s;
	charac = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == charac)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
