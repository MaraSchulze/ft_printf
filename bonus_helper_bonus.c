/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_helper_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:06:41 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 18:01:48 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_flag(char c)
{
	return (c == '#' || c == ' ' || c == '+');
}

int	is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || \
		c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

char	get_flag(const char *start, int length, char specifier)
{
	int		i;
	char	flag;

	i = 0;
	while (i < length)
	{
		if ((specifier == 'x' || specifier == 'X') && start[i] == '#')
			return (start[i]);
		if ((specifier == 'd' || specifier == 'i') && start[i] == '+')
			return (start[i]);
		if ((specifier == 'd' || specifier == 'i') && start[i] == ' ')
			flag = start[i];
		i++;
	}
	if (flag == ' ')
		return (flag);
	else
		return (0);
}
