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

void ksort_2(t_list *top)
{
	if ((top ->content) > (top->next->content))
		{
			printf("top->content es mayor\n");
			swap(&top);
		}
	printf("tiene 2 argumentos\n");
	// return(top);
}

void  index_num(t_list *top)
{
	printf("ingreso index\n");
	t_list *tmp1;
	int index_x;
	t_list *tmp2;

	tmp1 = top;	
	index_x = tmp1->index;
	index_x = 0;
	while (tmp1->next)
	{
		printf("ingreso al bucle\n");
		tmp2 = tmp1->next;
		printf("tmp1 es ->>>>>>%d\n" ,tmp1->content);
		printf("tmp2 es ->>>>>>%d\n" ,tmp2->content);
		while(tmp2)
		{
			printf("ingreso al segundo bucle\n");
			if (tmp1->content > tmp2->content)
			{
				index_x++;
			}			
			tmp2 = tmp2->next;	
		}
		tmp1->index = index_x;
		tmp1 = tmp1->next;
	}
	
}

t_list *number_of_arguments(t_list *top)
{
	int i; 
	
	i = top ->content;
	printf("%d\n", i);
	if (ft_lstsize(top) == 2)
	{
		ksort_2(top);
	}
	
	return(top);
}

char **check_error(char **argv /*, int argc*/)
{
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
	// if (argc <= 6)
	// {
	// 	if (check_error(argv) == NULL)
	// 		return 0;
		
	// }
	while(1 < argc )
	{
		j = 0;
		if (check_error(argv) == NULL)
			return 0;
		result = ft_split(argv[i], ' ');
		while (result[j])
		{
			num = ft_atoi(result[j]);
			if (ft_check_duplicate(head_list, num) == -1)
				return 0;
			tmp_list = ft_lstnew(num);
			ft_lstadd_back(&head_list, tmp_list);
			j++;
		}
		i++;
		argc--;
	}
	free(result);
	// number_of_arguments(head_list);
	index_num(head_list);
	while (head_list)
	{
		printf("------------------------------------------------");
		printf(("tmp_list es  ->>>> %d ,  y el index es %d\n"),head_list->content, head_list->index);
		head_list = head_list->next;
	}
}
