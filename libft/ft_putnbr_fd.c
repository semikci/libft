/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:11:37 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/18 18:27:53 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, ft_itoa(n), ft_strlen(ft_itoa(n)));
}

int	main(void)
{
	int	fd;

	fd = open("deneme4", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(1231453, fd);
}
