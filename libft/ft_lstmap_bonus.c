/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:51:59 by sepun             #+#    #+#             */
/*   Updated: 2023/11/03 15:25:18 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*ptr;
	void	*cont;

	newlist = NULL;
	ptr = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		cont = f(lst->content);
		ptr = ft_lstnew(cont);
		if (!ptr)
		{
			del(cont);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, ptr);
		lst = lst->next;
	}
	return (newlist);
}

/*void *ft_toupper2 (void *ptr)
{
    char *temp;
    int i;

    i = 0;
    temp = (char *) ptr;
    while(temp[i] != '\0')
    {
        if(temp[i] >= 'a' && temp[i] <= 'z')
        {
            temp[i] = temp[i] - 32;
        }
        i++;
    }
    return (temp);
}*/
/*int main()
{
    t_list *nodo1;
    t_list *nodo2;

    nodo2 = NULL;
    nodo1 = ft_lstnew(ft_strdup("hola")); 
    ft_lstadd_front(&nodo1, ft_lstnew(ft_strdup("que")));
    
    while(nodo1)
    {
        printf("%s\n", nodo1->content);
        nodo1 = nodo1->next;
    }
    
    nodo2 = ft_lstmap(nodo1, ft_toupper2, free);

    while(nodo2)
    {
        printf("%s\n", nodo2->content);
        nodo2 = nodo2->next;
    }


}*/
