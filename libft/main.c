/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:24:30 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 15:44:44 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;
	int			*a;
	const char	*cpy;
	const char	*original;

	original = "Semih Ekmekci";
	s1 = "semih ekmekci";
	s2 = "ekmekci";
	cpy = ft_strdup(original);
	a = (int *)ft_calloc(15, sizeof(int));
	for (int i = 0; i < 15; i++)
		printf("%d", a[i]);
	printf("\n%s\n", ft_strnstr(s1, s2, 20));
	printf("%d\n", ft_atoi("   -12345asda"));
	printf("%s\n", original);
	printf("%s\n", cpy);
	printf("%s\n", ft_substr(s1, 6, 7));
	printf("%s\n", ft_strjoin(s1, s2));
}
