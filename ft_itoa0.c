/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:23:41 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/02 18:00:50 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int nb)
{
	char		*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (nb == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (nb < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-nb));
	}
	else if (nb >= 10)
	{
		str = ft_strjoin(ft_itoa(nb / 10), ft_itoa(nb % 10));
	}
	else if (nb >= 0 && nb < 10)
	{
		str[0] = nb + 48;
		str[1] = '\0';
	}
	return (str);
}
