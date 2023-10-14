/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:44 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 10:18:39 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int c, size_t n)
{
	const unsigned char	*s;

	s = (unsigned char *)source;
	while (n--)
		if (*s++ == (char)c)
			return ((void *)s);
	return (NULL);
}
