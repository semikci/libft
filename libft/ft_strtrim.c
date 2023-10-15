/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:37:12 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/15 21:51:40 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const s1, char const *set)
{
	unsigned char	*str;

	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = (unsigned char *)s1;
	
}
