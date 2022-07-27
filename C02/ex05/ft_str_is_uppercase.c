/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:39:12 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 13:39:14 by mimoreir         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char str[] = "AbC";
	x = ft_str_is_uppercase(str);
	if (x==1)
		printf("Apenas contem letras\n");
	else
		printf("tem MERDA\n");

}*/