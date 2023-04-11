/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:34:12 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:50:02 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	size_t	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	j = 0;
	if (dstsize <= dlen)
		return (slen + dstsize);
	else
	{
		while (src[j] != '\0' && (dlen + j) < dstsize)
			dst[i++] = src[j++];
		if ((dlen + j) == dstsize && dlen < dstsize)
			dst[i - 1] = '\0';
		else
			dst[i] = '\0';
		return (slen + dlen);
	}
}
