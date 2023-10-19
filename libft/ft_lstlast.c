/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:01:37 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/19 14:18:35 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a = lst;
	while (a != NULL)
		a = a -> next;
	return (a);
}

int	main(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		printf("bellek boş\n");
	lst -> content = "semih";
	lst -> next -> content = "ekmekci";
	printf("%s\n", ft_lstlast(lst)->content);
	free(lst);
}
