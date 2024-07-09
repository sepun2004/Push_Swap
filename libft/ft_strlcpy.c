/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:04:42 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 17:28:17 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
/*int main() {
    char src[] = "holaaaa";
    char dest[20];
    unsigned int size = sizeof(dest);
    printf("src: %s\n",src);
    printf("dest: %s\n",dest);
    printf("unsigned int size: %d\n",size);

    unsigned int result = ft_strlcpy(dest, src, size);


    printf("\n");
    printf("src: %s\n",src);
    printf("dest: %s\n",dest);
    printf("unsigned int size: %d\n",size);

    return 0;
}*/
