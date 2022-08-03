/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:04:20 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:21 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS	0

# define FALSE	0

# define TRUE	1

# define EVEN_MSG	"I have an even number of arguments.\n"

# define ODD_MSG	"I have an odd number of arguments\n"

# define EVEN(var)	((var) % 2 == 0)

typedef int	t_bool;

#endif