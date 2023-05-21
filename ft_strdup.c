/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:18:15 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 08:43:21 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s);
	tmp = (char *)malloc(len + 1);
	if (tmp == 0)
		return (0);
	ft_strlcpy(tmp, s, len + 1);
	return (tmp);
}
