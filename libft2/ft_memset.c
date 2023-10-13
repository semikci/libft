/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:27 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 00:01:28 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	if (!dest)
		return (dest);
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
