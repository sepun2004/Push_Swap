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



char **check_error(char **argv /*, int argc*/)
{
	// printf("argc es : %d\n",argc );
	// printf("ingreso a check_error\n");
	if (ft_check_chars(argv) == -1)
	{
		printf("tiro -1 en ft_check_chars\n");
		return(NULL);
	}
	if (ft_check_string(argv) == -1)
	{
		printf("tiro -1 en ft_check_string\n");
		return(NULL);
	}
	if (ft_check_limits(argv) == -1)
	{
		printf("tiro -1 en ft_check_limits\n");
		return(NULL);
	}
	// if (argc > 2)
	// {
	// 	if (ft_check_duplicate(argv) == -1)
	// 	{
	// 		printf("tiro -1 en ft_check_duplicate\n");
	// 		return(NULL);
	// 	}
	// }
	return(argv);
} 


int main(int argc, char **argv)
{
	char **result;
	t_list *head_list = NULL;
	t_list *tmp_list = NULL;
	int i;
	int num;
	int j;

	i = 1;
	num = 0;
	if (argc < 2)
	{
		printf("no hay argumentos");
		return 0; 
	}
	while(1 < argc )
	{
		j = 0;
		if (check_error(argv/*, argc*/) == NULL)
			return 0;
		
		printf("el argumento es argv [%i] es  -> %s\n",i, argv[i]);
		result = ft_split(argv[i], ' ');
		while (result[j])
		{
			num = ft_atoi(result[j]); 
			printf("atoi es ->>>>%i\n", num);
			tmp_list = ft_lstnew(num);
			ft_lstadd_back(&head_list, tmp_list);
			
			j++;
		}
		i++;
		argc--;
	}
	while (head_list)
	{
		printf(("tmp_list es  ->>>> %d\n"),head_list->content);
		head_list = head_list->next; 
		// printf(("tmp_list es  ->>>> %d\n"),tmp_list->next);
	}
	
}