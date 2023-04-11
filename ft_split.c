/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:30 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/03 00:50:39 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//split a string into an array of words, divided by separator

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			i++;
		s++;
	}
	return (i);
}

static int	wordlength(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (len);
		len++;
	}
	return (ft_strlen(s));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	count = count_words(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (j < count)
			array[j++] = ft_substr(s, 0, wordlength(s, c));
		while (*s != c && *s)
			s++;
	}
	array[j] = NULL;
	return (array);
}
