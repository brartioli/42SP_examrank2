/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:17:05 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/12 17:17:05 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = (end - start) < 0 ? ((end - start) * -1) +1 : (end -start) + 1;
    int *range = (int *) malloc(len * sizeof(int));

    while (i < len)
    {
        if(start < end)
            range[i]=start++;
        else
            range[i] = start--;
        i++;   
    }
    return(range);
}
