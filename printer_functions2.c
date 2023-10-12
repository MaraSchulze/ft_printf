/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_functions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:27:50 by marschul          #+#    #+#             */
/*   Updated: 2023/07/17 19:33:25 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "helper_functions.h"

int	print_x(va_list argptr)
{
	unsigned int	ui;
	char			str[17];
	char			*s;
	int				printed_chars;

	ui = va_arg(argptr, unsigned int);
	s = nbr_to_string((unsigned long int) ui, str, 16, 'a');
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}

int	print_big_x(va_list argptr)
{
	unsigned int	ui;
	char			str[17];
	char			*s;
	int				printed_chars;

	ui = va_arg(argptr, unsigned int);
	s = nbr_to_string((unsigned long int) ui, str, 16, 'A');
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}

int	print_percent(void)
{
	return (write(1, "%", 1));
}
