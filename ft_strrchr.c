/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:35:29 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/02 14:13:43 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//search for char from the right (reverse) and o/p from there on

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	tmp;

	i = ft_strlen(s);
	tmp = (char )c;
	while (i >= 0)
	{
		if (s[i] == tmp)
		{
			return (&((char *)s)[i]);
		}
		else if (i == 0)
		{
			return (NULL);
		}
		i--;
	}
	return (NULL);
}
