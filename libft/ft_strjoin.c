/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:07:16 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 18:34:25 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	//ft_memcpy(str, s1, ft_strlen(s1));
	ft_strlcpy(str, s1, ft_strlen(s1));
	ft_strlcat(str, s2, (ft_strlen(s1) + ft_strlen(s2) + 2));
	return (str);
}
