/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:50:30 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/16 17:43:26 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*tmp;
	size_t	i;

	tmp = dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	while (i < n)
	{
		i++;
		*((char *)dest) = *((char *)src);
		dest++;
		src++;
	}
	return (tmp);
}
