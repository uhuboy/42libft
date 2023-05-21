/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:18:46 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 08:47:41 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	new_size;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s1 == 0)
		return (0);
	new_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(new_size * sizeof(char));
	if (new_str == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i++] = s2[j++];
	}
	new_str[i] = '\0';
	return (new_str);
}
