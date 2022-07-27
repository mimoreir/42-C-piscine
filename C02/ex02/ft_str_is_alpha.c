/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:26:38 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 11:26:41 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

int	ft_str_is_alpha(char *str)
{
	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			;
		else
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	int x;
	char str[] = "abc";
	x = ft_str_is_alpha(str);
	if (x==1)
		printf("Apenas contem letras\n");
	else
		printf("tem MERDA\n");

}*/
