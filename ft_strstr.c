/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:20:06 by hsiu              #+#    #+#             */
/*   Updated: 2019/04/29 18:20:18 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *hay, const char *needle)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	if (!(*needle))
		return ((char *)hay);
	while (hay[i])
	{
		while (needle[j] == hay[i + j])
		{
			if (j == len - 1)
				return ((char *)hay + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
