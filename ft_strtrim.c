/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:32:01 by hsiu              #+#    #+#             */
/*   Updated: 2019/05/03 13:32:02 by hsiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] && ft_isspaceintrim(s[i]))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_isspaceintrim(s[i + j]))
		j--;
	if (!(new = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(new, (s + i), (j + 1));
	return (new);
}
