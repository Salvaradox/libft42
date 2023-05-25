/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:23:41 by salvalva          #+#    #+#             */
/*   Updated: 2023/05/25 13:48:50 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*ft_count(long int n)
{
	int 	count;

	count = 0;
	
	if(n < 0)
	{
		n *= -1;
		count++;
	}
	if (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long int		num;

	num = n;
	i = ft_count(num);
	str = (char *)malloc(sizeof(char) * i + 1);
	str[i] = '\0';
	i--;
	if (!str)
		return (NULL);
	if(num == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if(num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while(num > 0)
	{
		str[i] = num % 10 + 48;
		num = num / 10;
		i--;
	}
	return (str);
}
