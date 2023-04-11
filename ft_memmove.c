/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:46:20 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/02 19:36:18 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// overlap is not an issue here, copy is done in a non destructive manner
// size_t can't reach 0 so while loop condition can't have 0 limit

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (!dst && !src)
		return (NULL);
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	while (len--)
		d[len] = s[len];
	return (d);
}
