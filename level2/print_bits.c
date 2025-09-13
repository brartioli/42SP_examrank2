/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:08:35 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/13 10:48:05 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		char c = ((octet >> i) & 1) + '0';
		write(1, &c, 1);
		i--;
	}
}
int main()
{
	unsigned char octet = 2;
	print_bits(octet);
}