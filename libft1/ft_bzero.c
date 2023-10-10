/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:10:40 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/10 18:37:54 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

int main()
{
	char	cdizi[] = "Bilgisayar";
	printf("dizinin ilk hali %s\n", cdizi);
	bzero(cdizi, 4);
	printf("dizinin bzero kullanılmış hali %s\n", cdizi);
}

/*int main( void )
{
    char buffer[80] = "semih vurdu gol oldu";

	bzero( buffer, 80 );
	printf("%s", buffer);
	return EXIT_SUCCESS;
}*/