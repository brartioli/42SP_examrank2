/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:40:49 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/12 16:40:49 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
            {
                return(i);
            }
            j++;
        }
        i++;
    }
    return(i);
}