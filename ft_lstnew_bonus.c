/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:05:38 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/08 19:05:39 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nuevo;

	nuevo = (t_list *)malloc(sizeof(t_list));
	if (!nuevo)
		return (NULL);
	nuevo->content = content;
	nuevo->next = NULL;
	return (nuevo);
}
