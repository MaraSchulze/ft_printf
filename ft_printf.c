/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:54:11 by marschul          #+#    #+#             */
/*   Updated: 2023/07/17 19:33:36 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "printer_functions.h"

int	dispatch(const char specifier, va_list argptr)
{
	if (specifier == 'c')
		return (print_c(argptr));
	if (specifier == 's')
		return (print_s(argptr));
	if (specifier == 'p')
		return (print_p(argptr));
	if (specifier == 'd')
		return (print_di(argptr));
	if (specifier == 'i')
		return (print_di(argptr));
	if (specifier == 'u')
		return (print_u(argptr));
	if (specifier == 'x')
		return (print_x(argptr));
	if (specifier == 'X')
		return (print_big_x(argptr));
	if (specifier == '%')
		return (print_percent());
	return (-1);
}

/*
A lot of input errors don't have to be caught, 
since the -Werror flag doesn't allow them.
*/
int	ft_printf(const char *formatstring, ...)
{
	va_list	argptr;
	int		printed_chars;
	int		current_printed_chars;

	printed_chars = 0;
	va_start(argptr, formatstring);
	while (*formatstring != '\0')
	{
		if (*formatstring == '%')
		{
			current_printed_chars = dispatch(*(++formatstring), argptr);
			if (current_printed_chars == -1)
				return (-1);
			printed_chars += current_printed_chars;
		}
		else
		{
			if (write(1, formatstring, 1) == -1)
				return (-1);
			printed_chars++;
		}
		formatstring++;
	}
	va_end(argptr);
	return (printed_chars);
}
