/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:22:58 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 08:50:26 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	reallen;
	char	*result;

	if (s == 0)
		return (0);
	slen = ft_strlen(s);
	reallen = 0;
	if (start < slen)
		reallen = slen - start;
	if (reallen > len)
		reallen = len;
	result = (char *)malloc(sizeof(char) * reallen + 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, s + start, reallen + 1);
	return (result);
}
