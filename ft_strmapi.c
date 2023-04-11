/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:00:52 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:52:43 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// call each value function, malloc used, new string will have result of
// called function and returns new string

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ns;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ns = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ns)
		return (NULL);
	while (s[i] != '\0')
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
