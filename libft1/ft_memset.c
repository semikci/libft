/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:44 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/10 17:26:11 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

int main()
{
	char cdizi[] = "Bilgisayar";
	printf("dizinin ilk hali %s\n", cdizi);
	ft_memset(cdizi,'x', 5);
	printf("dizinin üstünde memset kullanılmış hali %s\n", cdizi);
}