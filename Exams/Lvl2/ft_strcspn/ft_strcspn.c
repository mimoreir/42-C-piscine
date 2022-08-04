/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:30:18 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/03 17:30:20 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s, const char *reject)
{
	while (*s && *reject)
	{
		if (*s != *reject)
			return (0);
		s++;
		reject++;
	}
	if (*reject == '\0')
		return (1);
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*it;
	int		len;

	it = s;
	len = 0;
	while (*it)
	{
		if (*it == *reject)
		{
			if (ft_strcmp(it, reject))
				return (len);
		}
		len++;
		it++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	size_t	len;
	(void)argc;

	len = strcspn(argv[1], argv[2]);
	printf("%ld\n", len);
	len = ft_strcspn(argv[1], argv[2]);
	printf("%ld\n", len);
	return (0);
}