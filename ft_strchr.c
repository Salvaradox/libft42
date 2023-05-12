/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:30:46 by salvalva          #+#    #+#             */
/*   Updated: 2023/04/29 11:56:34 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((!*s && (char) c == '\0'))
		return ((char *) s);
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
		if (*s == (char) c)
			return ((char *) s);
	}
	return (0);
}
