/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:05:01 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/25 14:14:50 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int	i;
    char			*str;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) +1));
    if (!s || !f || !str)
		return (NULL);
    while (s[i])
    {
        str[i] = f(i, &s[i]);
        i++;
    }
}
