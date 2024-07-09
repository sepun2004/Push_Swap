/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:14:12 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 17:33:24 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	int		count;

	if (!s || !f)
		return (NULL);
	sptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sptr)
		return (NULL);
	count = 0;
	while (s[count])
	{
		sptr[count] = f(count, s[count]);
		++count;
	}
	sptr[count] = '\0';
	return (sptr);
}
/*char funcion_prueba_topper(unsigned int index, char c)
{
    if(c >= 'a' && c <= 'z')
		return (c - 32);
	else 
		return (c);
}

int main()
{
    const char *string_prueba = "Hola, Mundo!";

    char *result_string = ft_strmapi(string_prueba, funcion_prueba_topper);

    printf("string_prueba%s\n", string_prueba);
    printf("result_string  %s\n", result_string);
    free(result_string); // Liberar memoria asignada dinámicamente
    return 0;
}*/
