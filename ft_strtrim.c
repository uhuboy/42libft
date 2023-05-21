/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:22:46 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 09:04:16 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	if (set == 0 && s1 == 0)
		return (0);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]) && end > start)
	{	
		end--;
	}
	str = malloc(end - start + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
