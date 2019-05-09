/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:56:51 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/02 08:56:54 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (--n)
		*ptr1++ = *ptr2++;
	*ptr1 = *ptr2;
	return (dst);
}
