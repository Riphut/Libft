/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:42 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/03 00:52:10 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate memory and give value 0, also check it doesnt exceed size_max

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, count * size);
	return (s);
}
