/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkquers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <sepun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:49:47 by sepun             #+#    #+#             */
/*   Updated: 2024/08/23 18:47:55 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_check_chars(char **argv)
{
    int i;
    int j;

    i = 1;
	printf("ingreso a ft_check_chars\n");
    while (argv[i])
    {
		j = 0;
        while (argv[i][j])
        {
			// printf("%d\t%d\t%d\n",(argv[i][j]), i ,j );
            if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' && argv[i][j] != '-' && argv[i][j] != '+')
			{
				// printf("primer if\n");
				return (-1);
			}
			if (!ft_isdigit(argv[i][j]) && ((argv[i][j] == '+' || argv[i][j] == '-') && (!ft_isdigit(argv[i][j + 1]))))
			{
				// printf("second if\n");
				return (-1);
			}
            j++;
        }
        i++;
    }
	return(0);
}

int	ft_check_string(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (argv[i])
	{
		if (!ft_strlen(argv[i]))
			return (-1);
		j = 0;
		count = 0;

		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
				count++;
			j++;
		}
		if (count == 0)
			return (-1);
		i++;
	}
	return (0);
}

void	ft_free_array(char **strs)
{
	int i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}


int ft_check_limits(char **argv)	
{
	char **result;
	int i;
	int j;
	// long num;
	
	i = 1; 
	while(argv[i])
	{
		j = 0;
		result = ft_split(argv[i], ' ');
		if (!result)
		{
			// printf("result = -1\n");
			free(result);
			return (-1);
		}
		while (result[j] != NULL)
		{
			// printf("ft _atoll es: %ld\n",ft_atoll(result[j]));
			// printf("ft_atoi es: %d\n",ft_atoi(result[j]));
			// printf("num es : %ld\n", num);
			if (ft_atoll(result[j]) != ft_atoi(result[j]))
			{
				printf("no es igual\n");
				return (-1);
			} 
			j++;
		}
		ft_free_array(result);
		i++;
	}
	return (0);
}




int ft_check_duplicate(t_list *head_list, int num)
{
	t_list *current;

	current = head_list;
	while (current)
	{
		if (current-> content == num)
		{
			printf(" tiro -1\n");
			return -1;
		}
		current = current->next;
	}
	return (0);
	
}

// int ft_check_duplicate(char **argv)
// {
// 	char **num;
// 	int i;
// 	int j;
// 	int k;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		num = ft_split(argv[i], ' ');
// 		j = 0;
// 		k = j + 1;
// 		printf("num[%d] es -> %s \n",j,num[j]);
// 		while (num[j] != NULL)
// 		{
// 			j = 0;
// 			printf("J es -> %d\n", j);
// 			printf("num es -> %s\n", num[j + 1]);
// 			printf("ingreso en el while (num[k] != NULL)\n");
// 			// printf("ft_atoi(num[j]) = %d y ft_atoi(num[k]) = %d", ft_atoi(num[j]), ft_atoi(num[k]));
// 			if (ft_atoi(num[j]) == ft_atoi(num[k]))
// 			{
// 				printf("ft_atoi um k %d y dde num j: %d\n", ft_atoi(num[k]), ft_atoi(num[j]));
// 				return(-1);
// 			}
// 			j++;
// 			k++;
// 		}
// 		i++;
// 		j++;
// 	}
// 	return (0);
// }


// int ft_check_duplicate(char **argv)
// {
// 	char **num;
// 	int i;
// 	int j;
// 	int k;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		num = ft_split(argv[i], ' ');
// 		j = 0;
// 		k = j + 1;
// 		printf("num[%d] es -> %s \n",j,num[j]);
// 		while (num[j] != NULL)
// 		{
// 			j = 0;
// 			printf("J es -> %d\n", j);
// 			printf("num es -> %s\n", num[j + 1]);
// 			printf("ingreso en el while (num[k] != NULL)\n");
// 			// printf("ft_atoi(num[j]) = %d y ft_atoi(num[k]) = %d", ft_atoi(num[j]), ft_atoi(num[k]));
// 			if (ft_atoi(num[j]) == ft_atoi(num[k]))
// 			{
// 			check_duplicate(char **argv)
// {
// 	char **num;
// 	int i;
// 	int atoi1;
// 	int atoi2;
// 	int k = 0;
// 	int j;

// 	i = 1;
// 	printf("ingreso en ft_check_duplicate\n");
// 	while (argv[i])
// 	{
// 		num = ft_split(argv[i], ' ');
// 		if (!num)
// 		{
// 			printf("Eror en split\n");
// 			return(-1);
// 		}
		
// 		// printf("num es -> %s\n", num);
// 		printf("num es -> %s\n", num[k]);
// 		while (num[k])
// 		{
// 			j = 1 + k;
// 			printf("ingreso\n");// int ft_check_duplicate(char **argv) {
//     char **num;
//     int i, j, k;
//     int atoi1, atoi2;

//     i = 1; // Comenzamos desde el segundo argumento (i=1) porque argv[0] contiene el nombre del programa
//     printf("ingreso en ft_check_duplicate\n");
//     while (argv[i]) { // Iteramos sobre cada argumento individual
//         printf("ingreso al bucle argv[i]\n");
//         num = ft_split(argv[i], ' '); // Dividimos el argumento actual en palabras
//         if (!num) {
//             printf("Error en split\n");
//             return(-1);
//         }

//         k = 0;
//         while (num[k]) { // Iteramos sobre cada palabra en el argumento actual
//             printf("ingreso al bucle num[k]\n");
//             printf("num[k] es : %s\n", num[k]);
//             j = k + 1;
//             while (num[j]) { // Comparamos cada palabra con las siguientes
//                 printf("ingreso al bucle num[j]\n");

//                 atoi1 = ft_atoi(num[k]);
//                 printf("***%d****\n", atoi1);
//                 atoi2 = ft_atoi(num[j]);
//                 printf("***%d****\n", atoi2);
//                 if (atoi1 == atoi2) {
//                     printf("son iguales\n");
//                     return (-1); // Retorna -1 si encuentra números iguales
//                 }
//                 j++;
//             }
//             k++;
//         }
//         free(num); // Libera la memoria asignada para num
//         i++; // Pasamos al siguiente argumento
//     }
//     return (0); // Retorna 0 si no hay números iguales después de revisar todos los argumentos
// }
// 			// printf("num 2 es -> %s\n", num);
// 			while (num[j] != NULL)
// 			{
// 				printf("ingreso 2\n");

// 				atoi1 = ft_atoi(num[k]);
// 				atoi2 = ft_atoi(num[j]);
// 				if (atoi1 == atoi2)
// 				{
// 					printf("num k y j son iguales\n");
// 					return (-1);
// 				}else
// 					printf("no son iguales");
// 				j++;
// 			}
// 			k++;
// 		}
// 		// return(-1);
// 		i++;
// 	}
// 	return (0);
// }







// int ft_check_duplicate(char **argv) {
//     char **num;
//     int i, j, k;
//     int atoi1, atoi2;

//     i = 1; // Comenzamos desde el segundo argumento (i=1) porque argv[0] contiene el nombre del programa
//     printf("ingreso en ft_check_duplicate\n");
//     while (argv[i]) { // Iteramos sobre cada argumento individual
//         printf("ingreso al bucle argv[i]\n");
//         num = ft_split(argv[i], ' '); // Dividimos el argumento actual en palabras
//         if (!num) {
//             printf("Error en split\n");
//             return(-1);
//         }

//         k = 0;
//         while (num[k]) { // Iteramos sobre cada palabra en el argumento actual
//             printf("ingreso al bucle num[k]\n");
//             printf("num[k] es : %s\n", num[k]);
//             j = k + 1;
//             while (num[j]) { // Comparamos cada palabra con las siguientes
//                 printf("ingreso al bucle num[j]\n");

//                 atoi1 = ft_atoi(num[k]);
//                 printf("***%d****\n", atoi1);
//                 atoi2 = ft_atoi(num[j]);
//                 printf("***%d****\n", atoi2);
//                 if (atoi1 == atoi2) {
//                     printf("son iguales\n");
//                     return (-1); // Retorna -1 si encuentra números iguales
//                 }
//                 j++;
//             }
//             k++;
//         }
//         free(num); // Libera la memoria asignada para num
//         i++; // Pasamos al siguiente argumento
//     }
//     return (0); // Retorna 0 si no hay números iguales después de revisar todos los argumentos
// }




// int ft_check_duplicate(char **argv) {
//     int i = 1;
//     char **num;
//     int j;
//     int k = 0;

//     // Comenzamos desde el primer argumento pasado al programa
//     while (argv[i]) {
// 		printf("primer while\n");
//         num = ft_split(argv[i], ' '); // Dividir el string actual por espacios
//         j = 0;
//         while (num[j] != NULL) 
// 		{
//         	// Liberar memoria asignada por ft_split y continuar con el próximo argumento
// 		}
// 		i++;
//     }
// 	return 0; // Si no encontramos duplicados, retornamos 0
// }

