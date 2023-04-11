/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:18:22 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:51:00 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for char from left in string and o/p from there on
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	k;

	i = 0;
	k = (char) c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == k)
			return (&((char *)s)[i]);
		else
			i++;
	}
	return (NULL);
}
