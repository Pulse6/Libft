/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:57:05 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/02 08:57:07 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d1;
	char	*s2;

	d1 = (char*)dst;
	s2 = (char*)src;
	while (n--)
	{
		*d1 = *s2;
		if (*d1 == (char)c)
			return (d1 + 1);
		d1++;
		s2++;
	}
	return (NULL);
}
