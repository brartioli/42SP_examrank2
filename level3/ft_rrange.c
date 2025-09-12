/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 18:24:44 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/12 18:24:44 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len = (end - start) < 0? ((end - start) * -1)+1 : (end -start)+1;
    int *range= (int *) malloc(len * sizeof(int));
    int i = 0;

    while (i < len)
    {
        if(end <  start)
            range[i] = end++
        else
            range[i] = end--;
        i++;
    }
    return(range);
}