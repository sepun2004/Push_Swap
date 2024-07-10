/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:08:48 by sepun             #+#    #+#             */
/*   Updated: 2024/07/10 13:08:48 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>




size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j++] = s[i];
		}
		i++;
	}
	str[j] = 0;
	return (str);
}



void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}
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

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = ft_calloc(word + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
			return (ft_free(strs, j));
		i += size;
	}
	return (strs);
}

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
	if (str[i] == '+' || str[i] == '-'){
		// printf("entro\n");
		if (str[i++] == '-'){
			np = -1;
			// printf("entro en str[i++]\n");
		}
	}
	// if (str[i] == '-' && str[i++] == '-'){
	// 	printf("Error");
	// 	return 0;
	// }
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}

int	ft_isalpha(int x)
{
	while ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	return (0);
}

char  *check_error(char *str)
{
	int i;
	
	i = 0;
	// printf("entro en check_error\n");
	while (str[i] != '\0')
	{
		// printf("el caracter str[i] es :%c\n", str[i]);
		if (str[i] == '-' && str[i + 1] == '-' || (ft_isalpha(str[i])) == 1)
		{
			printf("entro en el if --");
			return NULL;
		}
		i++;
	}
	return (str);
}

int good_boy(char *str)
{

}


int main(int argc, char **argv)
{
	char **result;
    char delimiter = ' ';
	int i;
	int j;

	i = 1;
	j = 0;
	if (!argc || !argv[i])
	{
		printf("no hay argumentos");
		return 0; 
	}
	while(check_error(argv[i]))
	{
		// printf("el argumento es argv [%i]%s\n",i, argv[i]);
		result = ft_split(argv[i], delimiter);
		while (result[j] != NULL)
		{
			ft_atoi(result[j]);
			// printf("\n%i", ft_atoi(result[j]));
			j++;
		}
		i++;
	}
		// free(result);

		
    // int j = 0;
    // char *input_str = "  12   -23 345 ";
    // char **result = ft_split(input_str, delimiter);
	// int num;
	// char **result;
    // char delimiter = ' ';
    // int i = 0;

	// if (!input_str)
	// 	return 0;
	// 	if(check_error(input_str) != NULL)
	// {
	// 	result = ft_split(input_str, delimiter);
	// 	while (result[i] != NULL) {
	// 		ft_atoi(result[i]);
	// 		printf("\n%i", ft_atoi(result[i]));
	// 		i++;
	// 	}
	// 	free(result);
	// }
	// if (!input_str)
	// 	return 0;
	// 	if(check_error(input_str) != NULL)
	// {
	// 	result = ft_split(input_str, delimiter);
	// 	while (result[i] != NULL) {
	// 		ft_atoi(result[i]);
	// 		printf("\n%i", ft_atoi(result[i]));
	// 		i++;
	// 	}
	// }
	
}