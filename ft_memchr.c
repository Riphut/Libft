/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:22:43 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/02 14:10:39 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// to locate byte in byte string, n is max size of bytes

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	a;

	if (n == 0)
		return (NULL);
	a = (char) c;
	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == a)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
