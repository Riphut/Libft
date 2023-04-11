/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:44:23 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/02 23:28:22 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert integer to character

#include "libft.h"

static int	lenn(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	a;
	size_t			i;

	i = lenn(n);
	a = n;
	str = malloc(sizeof(char) * (i) + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[--i] = '0';
	if (n < 0)
	{
		str[0] = '-';
		a = n * -1;
	}
	while (a > 0)
	{
		str[--i] = (a % 10) + '0';
		a = a / 10;
	}
	return (str);
}
