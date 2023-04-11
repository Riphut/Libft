/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:31:52 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:53:19 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// same as concatenation
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dup;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	if (!s1 && !s2)
		return (NULL);
	dup = (char *) malloc(sizeof(char) * ft_strlen(s1)
			+ sizeof(char) * ft_strlen(s2) + 1);
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		dup[i++] = s2[j++];
	dup[i] = '\0';
	return (dup);
}
