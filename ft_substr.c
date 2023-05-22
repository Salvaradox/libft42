/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:39:27 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/18 20:39:27 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;
    
    if (!s)
		return (NULL);
    str = (char *)malloc(sizeof(*s) * len + 1);
    if (!str)
    	return (NULL);
    i = 0;
    while (i < len)
    {
		str[i] = s[start + i];
    	i++;
    }
    str[i] = '\0';
    return (str);
}
