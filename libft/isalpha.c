/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:00:54 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 22:00:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isalpha(int c)
{
	return ((c <= 122 && c >= 97 ) || (c <= 90 && c >= 65));
}

int main()
{
	printf("%d\n", isalpha('c'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha('A'));	
}