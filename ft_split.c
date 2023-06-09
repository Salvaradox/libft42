/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:28:00 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/09 08:46:37 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	wrd;

	wrd = 0;
	while (*s)
	{
		if (*s != c)
		{
			wrd++;
			while(*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (wrd);
}

char	**ft_split(const char *s, char c)
{
	char 	**str;
	size_t	i;
	size_t	len;
	
	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_countword(s, c) + 1));
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != 0 && ++len)
				s++;
			str[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	return (str);
}
