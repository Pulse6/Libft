/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:36:40 by hsiu              #+#    #+#             */
/*   Updated: 2019/04/29 18:36:47 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_strlen(needle);
	if (!(*needle))
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		while (needle[j] == hay[i + j] && (i + j) < len)
		{
			if (j == size - 1)
				return ((char *)hay + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
