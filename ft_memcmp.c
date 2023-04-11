/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:23:05 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:49:33 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compare byte string

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i <= n && a[i] == b[i])
	{
		if (i == n - 1)
		{
			return (0);
		}
		i++;
	}
	return (a[i] - b[i]);
}
