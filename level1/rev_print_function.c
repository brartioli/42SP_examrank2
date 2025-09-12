/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:15:26 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/12 10:59:44 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
	return(str);
}
int main (int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	write (1, "\n", 1);
	return(0);
}