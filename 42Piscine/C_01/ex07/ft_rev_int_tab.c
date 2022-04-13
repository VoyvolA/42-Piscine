/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 03:55:50 by emekinci          #+#    #+#             */
/*   Updated: 2021/12/01 03:55:54 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	pos;
	int	turns;

	temp = 0;
	pos = 0;
	turns = size / 2;
	while (turns > 0)
	{
		temp = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		pos++;
		turns--;
	}
}
