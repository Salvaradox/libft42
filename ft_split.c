/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:37:31 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/26 14:18:56 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	unsigned int i;
	int			 cont;

	i = 0;
	cont = 0;
	
	while(s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		if(s[i] != c)
		{
			cont++;
			i++;
		}
	}
	return (cont);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char)* n + 1);
	if (!str)
		return (NULL);
	str = ft_strlcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	int		i;
	int		j;
	char	**str;

	i = 0;
	k = 0;
	str = (char *)malloc(sizeof(char)*(ft_count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while(str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		j = i;
		while(s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[k] = ft_strndup(s + j, i - j);
			k++;
		}
		str[k] = '\0';
		return (str);
	}
}