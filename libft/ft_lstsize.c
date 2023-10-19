/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:41:11 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/19 13:58:42 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*a;
	int		i;

	a = (t_list *)malloc(sizeof(t_list));
	a = lst;
	i = 0;
	while (a != NULL)
	{
		printf("%s\n", a -> content);
		a = a -> next;
		i++;
	}
	return (i);
}

int	main(void)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		printf("boş bellek\n");
	a -> content = "semih";
	a -> next = (t_list *)malloc(sizeof(t_list));
	a -> next -> content = "ekmekci";
	a -> next -> next = (t_list *)malloc(sizeof(t_list));
	a -> next -> next -> content = "...";
	a -> next -> next -> next = (t_list *)malloc(sizeof(t_list));
	a -> next -> next -> next = NULL;
	printf("%d", ft_lstsize(a));
	free (a);
}
