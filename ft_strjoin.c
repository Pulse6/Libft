/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:03:17 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/03 13:03:18 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = ft_strnew(s1_len + s2_len);
	if (!new)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < s1_len)
		*(new + i) = *(s1 + i);
	while (++j < s2_len)
		*(new + i++) = *(s2 + j);
	return (new);
}
