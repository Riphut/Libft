/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:59 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/18 17:40:21 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a copy of of s1 with set removed from beginning and end
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	trim = ft_substr(s1, 0, (i + 1));
	if (!trim)
		return (NULL);
	return (trim);
}
