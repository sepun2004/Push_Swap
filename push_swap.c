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


t_list *number_of_arguments(int argc, t_list *top)
{
	// if(argc == 3)
	(void)argc;
	if (ft_lstsize(top) == 2)
	{
		swap(&top);
		// two_argumments(top);
		
		// // while (top != NULL)
		// // {
		// 	printf("------------------------------------------------");
		// 	printf(("top es  ->>>> %d\n"),top->content);
		// 	// top = top->next; 
		// 	// printf(("tmp_list es  ->>>> %d\n"),tmp_list->next);
		// // }
		// // printf("%d\n", top->content);
		printf("tiene 3 argumentos\n");
	}
	// else if (argc == 4)
	// {
	// 	printf("tiene 4 argumentos\n");

	// }
	return(top);
}

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
	// 	}two_argumments
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
		
		// printf("el argumento es argv [%i] es  -> %s\n",i, argv[i]);
		result = ft_split(argv[i], ' ');
		while (result[j])
		{
			num = ft_atoi(result[j]); 
			// printf("atoi es ->>>>%i\n", num);
			// ft_check_duplicate(head_list, num);
			if (ft_check_duplicate(head_list, num) == -1)
			{
				printf("ft_check_duplicate tiro -1\n");
				return 0;
			}
			
			tmp_list = ft_lstnew(num);
			ft_lstadd_back(&head_list, tmp_list);
			printf(("head_list->content --1-- es  ->>>> %d\n"),head_list->content);
			printf(("head_list->content --2-- es  ->>>> %d\n"),head_list->content);
			swap(&head_list);

			// reverse_rotate(&head_list);
			
			j++;
		}
			// number_of_arguments(argc, head_list);
		i++;
		argc--;
	}
	printf(("pppppppppppppppphead_list->content --1-- es  ->>>> %d\n"),head_list->content);
			//swap(head_list);
			// printf(("pppppppppppppphead_list->content --2-- es  ->>>> %d\n"),head_list->next->content);

	// number_of_arguments(argc, head_list);
		// printf("%d\n", ft_lstsize(head_list));
	while (head_list)
	{
		printf("------------------------------------------------");
		printf(("tmp_list es  ->>>> %d\n"),head_list->content);
		head_list = head_list->next; 
		// printf(("tmp_list es  ->>>> %d\n"),tmp_list->next);
	}
	
}
