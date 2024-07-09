/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:49:35 by sepun             #+#    #+#             */
/*   Updated: 2023/11/20 15:48:06 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		f;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	f = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= f)
		i++;
	if (i > f)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[f]) && f >= 0)
		f--;
	str = malloc(f - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], f - i + 2);
	return (str);
}
/*int main() {

    const char *cadena = "* *_.   hola, mundo!    ";
    const char *conjunto = " * _ .";


    char *resultado = ft_strtrim(cadena, conjunto);
    printf("Cadena resultante: \"%s\"\n", resultado);
}*/
