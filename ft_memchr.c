/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:57:27 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/02 08:57:40 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c1;
	int				i;

	i = -1;
	c1 = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
		if (ptr[++i] == c1)
			return (ptr + i);
	return (NULL);
}
