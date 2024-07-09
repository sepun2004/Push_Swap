/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:04 by sepun             #+#    #+#             */
/*   Updated: 2023/11/16 15:34:32 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		j;
	int		i;

	if (s1 && s2)
	{
		str = (char *)malloc(sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (str == 0)
			return (NULL);
		j = 0;
		i = 0;
		while (s1[j])
		{
			str[j] = s1 [j];
			j++;
		}
		while (s2[i])
		{
			str[j++] = s2 [i++];
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
