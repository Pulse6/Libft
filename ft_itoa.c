/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 09:21:58 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/03 09:22:07 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*new;

	sign = (n < 0) ? 1 : 0;
	len = ft_lenforitoa(n);
	if (!(new = ft_strnew((size_t)(len + sign))))
		return (NULL);
	if (sign)
		new[0] = '-';
	else if (n > 0)
		len--;
	else
		new[0] = '0';
	while (n)
	{
		if (n > 0)
			new[len] = (n % 10) + '0';
		else
			new[len] = -(n % 10) + '0';
		n /= 10;
		len--;
	}
	return (new);
}
