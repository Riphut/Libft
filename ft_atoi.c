/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:07:28 by rkandiyi          #+#    #+#             */
/*   Updated: 2023/01/01 19:52:34 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert character to integer

#include "libft.h"

static int	check_limit(const char *str, int i, int sgn)
{
	unsigned long long	res;

	res = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
			i++;
		if (res > 9223372036854775807 && sgn == 1)
			return (-1);
		else if (res > 9223372036854775807 && sgn == -1)
			return (0);
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sgn;
	unsigned long long	res;

	i = 0;
	sgn = 1;
	res = 0;
	while (str[i] == ' ' || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if ((str[i] == '-' || str[i] == '+')
			&& (str[i + 1] == '-' || str[i + 1] == '+'))
			return (0);
		else if (str[i] == '-')
				sgn = -1;
			i++;
	}
	res = check_limit(str, i, sgn);
	return (res * sgn);
}
