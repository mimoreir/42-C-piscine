/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:36:47 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 13:36:49 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*c;

	c = dest;
	while (*c)
	{
		c++;
	}
	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (dest);
}

/*int	main(void)
{
	char a[15] = "Hello ";
	char b[6] = "World";


	ft_strcat(a,b);
	printf("%s\n", a);
}*/