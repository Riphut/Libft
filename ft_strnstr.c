/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:23:18 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/12/30 21:51:18 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates first occurance of null in a string, searches max limit len characters
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;	

	i = 0;
	tmp = (char *)haystack;
	if (!haystack && len == 0)
		return (NULL);
	if (needle[i] == '\0')
		return (tmp);
	while (tmp[i] != '\0')
	{
		j = 0;
		while (tmp[i + j] != '\0' && tmp[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (&tmp[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
