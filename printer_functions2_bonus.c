/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_functions2_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:27:50 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 17:55:29 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "helper_functions.h"
#include "bonus_helper_bonus.h"

int	print_x(va_list argptr, char flag)
{
	unsigned int	ui;
	char			str[17];
	char			*s;
	int				printed_chars;

	ui = va_arg(argptr, unsigned int);
	s = nbr_to_string((unsigned long int) ui, str + 2, 16, 'a');
	if (flag == '#' && ui != 0)
	{
		s[-1] = 'x';
		s[-2] = '0';
		s -= 2;
	}
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}

int	print_big_x(va_list argptr, char flag)
{
	unsigned int	ui;
	char			str[19];
	char			*s;
	int				printed_chars;

	ui = va_arg(argptr, unsigned int);
	s = nbr_to_string((unsigned long int) ui, str + 2, 16, 'A');
	if (flag == '#' && ui != 0)
	{
		s[-1] = 'X';
		s[-2] = '0';
		s -= 2;
	}
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}

int	print_percent(void)
{
	return (write(1, "%", 1));
}
