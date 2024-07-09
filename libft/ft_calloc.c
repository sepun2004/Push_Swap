/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:35:57 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 16:21:19 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*int main() {
    size_t count = 5;
    size_t size = sizeof(char);
    char *array = (char *)ft_calloc(count, size);
    size_t i;
    
    i = 0;
    printf("%s\n", array);
    i++;
    

    free(array);

    return 0;
}*/
