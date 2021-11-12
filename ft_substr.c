/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:23:19 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/10 16:43:08 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_str;
	char	*str;

	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	i = 0;
	len_str = ft_strlen(s) - start;
	str = ft_calloc(len_str, sizeof(char));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = 0;
	return (str);
}
