/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:13:22 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/26 12:24:24 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putchar_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-',fd);
			n *= -1;
		}
		if (n > 0)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		else
			ft_putchar_fd((n % 10) + 48, fd);
	}
}