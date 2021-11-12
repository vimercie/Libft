/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:50:51 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/08 14:04:57 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	tmp;
	size_t			i;

	tmp = c;
	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)s + i + 1);
	while (s[i])
	{
		if (s[i] == tmp)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
