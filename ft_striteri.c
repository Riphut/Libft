/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:07:22 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 22:06:50 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// applies function 'f' on each character of string passed as argument
// passing its index as first argument
//function is called with index and the argument in that string

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
