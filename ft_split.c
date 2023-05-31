/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:37:31 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/31 18:35:21 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	unsigned int	i;
	int				cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			cont++;
			i++;
		}
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**str;

	i = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!str || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i < j)
		{
			str[k] = ft_substr(s - i, 0, i);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}
