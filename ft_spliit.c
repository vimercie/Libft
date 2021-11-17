/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spliit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:46:13 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/17 18:47:55 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	start;

	tab = NULL;
	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab[j] = ft_substr(s, start, i);
			start = i;
			j++;
		}
		i++;
	}
	i = 0;
	while (tab[i])
	{
		tab[i] = ft_strtrim(tab[i], &c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int	main(void)
{
	char	*s;
	char	**tab;
	size_t	i;

	s = "bonsoir | comment | ca | va ?";
	tab = ft_split(s, '|');
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
