/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:28:03 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/18 20:28:03 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	return ((char *)str);
}
