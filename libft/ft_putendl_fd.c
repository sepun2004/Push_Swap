/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:29:03 by sepun             #+#    #+#             */
/*   Updated: 2023/10/03 13:31:33 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int main()
{
    int fd = 1; // Usamos 1 para stdout (salida estándar)

    char *message = "Hola !!!!!!!";
    char *prueba;

    ft_putendl_fd(message, fd);
    return 0;
}*/