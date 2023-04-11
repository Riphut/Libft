/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:21:20 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:45:12 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// writes value c into string b of certain length similar to bzero

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	size_t			i;
	unsigned char	*str;

	a = (unsigned char) c;
	str = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
