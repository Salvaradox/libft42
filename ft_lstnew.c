/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:22:34 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/07 17:48:27 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list  *nuevo;

	nuevo = (t_list *)malloc(sizeof(t_list));
	if (!nuevo)
		return (NULL);
	nuevo->content = (void *)content;
	nuevo->next = NULL;
	return (nuevo);
}
