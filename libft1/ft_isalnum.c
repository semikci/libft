/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:07:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 22:07:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	return (((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		|| (c <= '9' && c >= '0'));
}
