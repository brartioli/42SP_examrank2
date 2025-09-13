/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 18:34:07 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/12 18:34:07 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int digit = 0;

    if (*str == '-')
    {
        str++;
        sign = -1;
    }
    while(*str)
    {
        if(*str >= '0' && *str <= '9')
            digit = *str - '0';
        else if(*str >= 'a' && *str <= 'f')
            digit = *str - 'a' + 10;
        else if(*str >= 'A' && *str <= 'F')
            digit = *str - 'A' + 10;
        else
            break;
        str++;
        res = res * str_base + digit;
    }
    return(res * sign);
}