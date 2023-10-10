/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:55:07 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/10 19:35:24 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dst;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int main()
{
	const char	source[] = "semih gol attı";
	char	destination[5];
	printf("%s", ft_memcpy(destination, source, 10));
	//printf("%s", memcpy(destination, source, 10));
}
