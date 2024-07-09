#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct snodo{ //snodo es el nombre de la estructura
//     int valor;
//     struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
// }tnodo;


// static int	ft_count_word(char const *s, char c)
// {
// 	int	i;
// 	int	word;

// 	i = 0;
// 	word = 0;
// 	while (s && s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			word++;
// 			while (s[i] != c && s[i])
// 				i++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (word);
// }

// static int	ft_size_word(char const *s, char c, int i)
// {
// 	int	size;

// 	size = 0;
// 	while (s[i] != c && s[i])
// 	{
// 		size++;
// 		i++;
// 	}
// 	return (size);
// }

// static char	**ft_free(char **strs, int j)
// {
// 	while (j-- > 0)
// 		free(strs[j]);
// 	free(strs);
// 	return (NULL);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		word;
// 	char	**strs;
// 	int		size;
// 	int		j;

// 	i = 0;
// 	j = -1;
// 	word = ft_count_word(s, c);
// 	strs = ft_calloc(word + 1, sizeof(char *));
// 	if (!strs)
// 		return (NULL);
// 	while (++j < word)
// 	{
// 		while (s[i] == c)
// 			i++;
// 		size = ft_size_word(s, c, i);
// 		strs[j] = ft_substr(s, i, size);
// 		if (!strs[j])
// 			return (ft_free(strs, j));
// 		i += size;
// 	}
// 	return (strs);
// }



// int *ft_atoi(char *str)
// {
//     int i;
//     int np;
//     int  num;

//     np = 1;
//     while (str != '\0')
//     {
//         // while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
// 		// || str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
// 		// i++;
//         if (str[i] == '+' || str[i] == '-')
// 		    if (str[i++] == '-')
// 			    np = -1;
//         while (str[i] >= '0' && str[i] <= '9')
// 	    {
// 		    num = num * 10 + (str[i] - '0');
// 		    i++;
// 	    }
//     }
//     return((int)(np * num));
// }



int search_space(char *str)
{
	char **result;
	int num;

	result = ft_split(str, ' ');
	if (!result)
		printf("Result fallo en ft_split");
	num = ft_atoi(result);
	if (!num)
		printf("num fallo en ft_atoi");		
}


/*
int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}
*/

int main() {
    char *str = "122 12 12 ";
    search_space(str);
    return 0;
}
