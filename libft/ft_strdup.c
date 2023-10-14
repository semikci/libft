/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:36:00 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 08:53:45 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	n;

	n = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(*cpy) * n);
	if (cpy == NULL)
		return (NULL);
	return ((char *)ft_memcpy(cpy, s1, n));
}
