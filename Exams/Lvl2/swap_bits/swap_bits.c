/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:47:38 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 15:47:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet = (octet >> 4) | (octet << 4));
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}

int main(void)
{
	unsigned char	octet = 0b00100110;
	for (int i = sizeof(char) * 8; i != -1; i--)
	{
        printf("%d", (octet & (1 << i)) >> i );
	}
	printf("\n");
    /*octet = swap_bits(octet);
    for (int i = sizeof(char) * 8; i != -1; i--)
    {
        printf("%d", (octet & (1 << i)) >> i );
    }
    printf("\n");*/
    octet = reverse_bits(octet);
    for (int i = sizeof(char) * 8; i != -1; i--)
    {
        printf("%d", (octet & (1 << i)) >> i );
    }

	return (0);
}