/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:14:39 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 08:14:42 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	const unsigned char	*src;

	src = (const unsigned char *)s;
	while (len)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
		len--;
	}
	return (0);
}
