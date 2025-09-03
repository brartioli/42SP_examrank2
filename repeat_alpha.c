/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:38:04 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/03 15:31:02 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_verifyalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 'a' + 1);
	if (c >= 'A' && c <= 'Z')
		return(c - 'A' + 1);
	return (1);

}
int main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		int i = 0;
		while (argv[1][i])
		{
			int reapt = ft_verifyalpha(argv[1][i]);
			while (reapt > 0)
			{
				write (1, &argv[1][i], 1);
				reapt --;
			}
			i++;
		}
		write (1, "\n", 1);
	}
}