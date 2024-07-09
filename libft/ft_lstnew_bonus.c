/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:02:33 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 13:16:25 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*int main()
{
    int numero = 42;
    t_list *nuevoElemento = ft_lstnew(&numero);

    if (nuevoElemento != NULL)
    {
        printf("Nuevo elemento creado con éxito.\n");

        int *contenido = (int *)(nuevoElemento->content);
        printf("Contenido del elemento: %d\n", *contenido);
    }

    return 0;
}*/
