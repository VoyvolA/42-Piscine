/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:01:47 by emekinci          #+#    #+#             */
/*   Updated: 2021/12/15 23:01:48 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		bir;
	int		iki;
	int		c;

	s = malloc(sizeof(strs));
	bir = 0;
	c = 0;
	while (bir < size)
	{
		iki = 0;
		while (strs[bir][iki] != '\0')
		{
			s[c++] = strs[bir][iki++];
		}
		iki = 0;
		while (sep[iki] != '\0' && bir != size - 1)
		{
			s[c++] = sep[iki++];
		}
		bir++;
	}
	s[c] = '\0';
	return (s);
}
