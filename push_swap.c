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

# include "push_swap.h"


int check_error(char **argv)
{
	if (ft_check_chars(argv) == -1)
		return(NULL);
	if (ft_check_string(argv) == -1)
		return(NULL);
	if (ft_check_limits(argv) == -1)
		return(NULL);	
}

// char  *check_error(char *str)
// {
// 	int i;
	
// 	i = 0;
// 	// printf("entro en check_error\n");
// 	while (str[i] != '\0')
// 	{
// 		// printf("el caracter str[i] es :%c\n", str[i]);
// 		if (str[i] == '-' && str[i + 1] == '-' || (ft_isalpha(str[i])) == 1)
// 		{
// 			printf("entro en el if --");
// 			return NULL;
// 		}
// 		i++;
// 	}
// 	return (str);
// }


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