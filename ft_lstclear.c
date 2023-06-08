/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 07:37:07 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/08 07:56:50 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	
	if (lst != NULL)
	{
		while(*lst != NULL)
		{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;	
		}
	}
}
