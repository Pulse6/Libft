/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 08:12:54 by hsiu              #+#    #+#             */
/*   Updated: 2019/04/30 08:12:56 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	dest_len;
	size_t	src_len;

	i = ft_strlen(dst);
	j = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dest_len)
		return (src_len + size);
	if (size > dest_len + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dest_len + src_len);
}
