/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:54:11 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 18:03:32 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "printer_functions_bonus.h"
#include "bonus_helper_bonus.h"

int	dispatch(const char specifier, va_list argptr, char flag)
{
	if (specifier == 'c')
		return (print_c(argptr));
	if (specifier == 's')
		return (print_s(argptr));
	if (specifier == 'p')
		return (print_p(argptr));
	if (specifier == 'd')
		return (print_di(argptr, flag));
	if (specifier == 'i')
		return (print_di(argptr, flag));
	if (specifier == 'u')
		return (print_u(argptr));
	if (specifier == 'x')
		return (print_x(argptr, flag));
	if (specifier == 'X')
		return (print_big_x(argptr, flag));
	if (specifier == '%')
		return (print_percent());
	return (-1);
}

int	wrapper(const char **formatstring, va_list argptr)
{
	int			i;
	char		flag;
	char		specifier;
	const char	*flagstart;

	(*formatstring)++;
	i = 0;
	flagstart = *formatstring;
	while (is_flag(**formatstring))
	{
		i++;
		(*formatstring)++;
	}
	if (is_specifier(**formatstring))
	{
		specifier = **formatstring;
		flag = get_flag(flagstart, i, specifier);
		return (dispatch(specifier, argptr, flag));
	}
	else
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
			current_printed_chars = wrapper(&formatstring, argptr);
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
