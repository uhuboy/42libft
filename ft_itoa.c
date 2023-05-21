/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:13:17 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 09:16:01 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	chklen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	number;

	len = chklen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		number = n * -1;
	}
	else
		number = n;
	while (number > 0)
	{
		str[len--] = number % 10 + 48;
		number = number / 10;
	}
	return (str);
}
