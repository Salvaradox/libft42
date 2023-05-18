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

char    ft_strdup(const char *s);
{
    char *str;

    if (!s)
        return (NULL)
    str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    ft_strlcpy(str, s, ft_strlen(s));
    return (str);
}
