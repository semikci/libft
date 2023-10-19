/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:51:21 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:40 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*x;

	x = *lst;
	x -> next = new;
	new -> next = NULL;
}

int	main(void)
{
	t_list	*a;
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		printf("bellek boş\n");
	new -> content = "semih ekmekci";
	ft_lstadd_front(&a, new);
	printf("%s\n", a -> next -> content);
	free(new);
}
