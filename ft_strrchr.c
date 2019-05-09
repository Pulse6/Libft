/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:18:00 by hsiu              #+#    #+#             */
/*   Updated: 2019/04/29 19:18:03 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char*)s + i);
	while (i--)
		if (s[i] == (char)c)
			return ((char*)s + i);
	return (NULL);
}
