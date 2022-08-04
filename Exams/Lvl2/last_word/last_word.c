/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:17:48 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 14:17:49 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str && (*str != ' ' && *str != '\t'))
	{
		ft_putchar(*str);
		str++;
	}
}

void	last_word(char 	*str)
{
	char	*it;

	it = str;
	while (*it)
		it++;
	it--;
	while (*it == ' ' || *it == '\t')
		it--;
	while (it != str && (*it != ' ' && *it != '\t'))
		it--;
	it++;
	ft_putstr(it);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}