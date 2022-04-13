/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:51:19 by emekinci          #+#    #+#             */
/*   Updated: 2021/12/03 23:51:21 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_alphabet(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (2);
	else
		return (0);
}

int	ft_capitalizer(char *str, int i)
{
	if (ft_check_alphabet(str, i) == 1)
		str[i] = str[i] - 32;
	i++;
	while (ft_check_alphabet(str, i) && str[i] != '\0')
	{
		if (ft_check_alphabet(str, i) == 2)
			str[i] = str[i] + 32;
		i++;
	}
	return (i);
}

int	ft_strlowcase(char *str, int i)
{
	while (ft_check_alphabet(str, i) && str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_check_alphabet(str, 0) == 1)
		i = ft_capitalizer(str, i);
	while (str[i] != '\0')
	{
		while (!(ft_check_alphabet(str, i)) && str[i] != '\0')
			i++;
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			i = ft_strlowcase(str, i);
		else if (ft_check_alphabet(str, i))
			i = ft_capitalizer(str, i);
	}
	return (str);
}
