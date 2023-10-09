/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iascii.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:10:42 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 22:10:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int main()
{
	printf("%d\n", isascii('A'));
	printf("%d\n", isascii(0));
	printf("%d\n", isascii(1));
}