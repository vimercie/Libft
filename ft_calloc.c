/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:30:16 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/06 15:56:28 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	int		total_size;
	void	*ptr;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	while (i < total_size)
	{
		*((char *)ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
