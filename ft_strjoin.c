/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:42:17 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/26 16:46:55 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const s*2)
{
	int		s1len;
	int		s2len;
	char	*str;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1len + s2len));
	if (!str)
		return (NULL);
	ft_strlcat(s1, s2, (s1len + s2len));
	return (str);
}
