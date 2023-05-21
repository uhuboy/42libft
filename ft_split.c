/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crujimet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:17:25 by crujimet          #+#    #+#             */
/*   Updated: 2023/05/01 08:39:28 by crujimet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	trigger;

	i = 0;
	count = 0;
	while (s[i])
	{
		trigger = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			trigger++;
		}
		if (trigger != 0)
			count++;
	}
	return (count);
}

static void	splitword(char **result, char const *s, char c, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	wordsize;

	i = 0;
	j = 0;
	while (j < count)
	{
		wordsize = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			wordsize++;
		}
		result[j] = (char *)malloc((wordsize + 1) * sizeof(char));
		if (result[j] == NULL)
		{
			result = NULL;
			break ;
		}
		j++;
	}
}

static void	makeword(char **result, char const *s, char c, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (j < count)
	{
		k = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			result[j][k] = s[i];
			k++;
			i++;
		}
		result[j][k] = '\0';
		j++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;

	if (!s)
		return (NULL);
	count = countword(s, c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	splitword(str, s, c, count);
	if (str == NULL)
		return (NULL);
	makeword(str, s, c, count);
	return (str);
}
