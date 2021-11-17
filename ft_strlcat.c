/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:48:12 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/16 18:04:27 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_max;

	i = ft_strlen(dst);
	j = i;
	len_max = ft_strlen(dst) + ft_strlen(src);
	while (i < size && src[i - j])
	{
		dst[i] = src[i - j];
		i++;
	}
	dst[j + (i - j)] = '\0';
	return (len_max);
}
