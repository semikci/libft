/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:00:58 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 22:00:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int main()
{
	printf("%d\n", isdigit('5'));
	printf("%d\n", isdigit('a'));
	//printf("%d\n", b);
	//printf("%c", b);
	return (0);
}