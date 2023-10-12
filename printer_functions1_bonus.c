/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_functions1_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:26:38 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 16:34:51 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "helper_functions.h"
#include "bonus_helper_bonus.h"

int	print_c(va_list argptr)
{
	unsigned char	c;

	c = (unsigned char) va_arg(argptr, int);
	return (write(1, &c, 1));
}

int	print_s(va_list argptr)
{
	const char	*str;

	str = va_arg(argptr, const char *);
	if (str == NULL)
		return (ft_putstr("(null)"));
	else
		return (ft_putstr(str));
}

int	print_p(va_list argptr)
{
	void	*pointer;
	char	str[19];
	char	*s;
	int		printed_chars;

	pointer = va_arg(argptr, void *);
	if (pointer == NULL)
		return (ft_putstr("0x0"));
	s = nbr_to_string((unsigned long int) pointer, str + 2, 16, 'a');
	s[-1] = 'x';
	s[-2] = '0';
	printed_chars = ft_putstr((const char *) s - 2);
	if (printed_chars == -1)
		return (-1);
	else
		return (printed_chars);
}

int	print_di(va_list argptr, char flag)
{
	int		nbr;
	char	str[18];
	char	*s;
	int		printed_chars;

	nbr = va_arg(argptr, int);
	s = nbr_to_string_signed(nbr, str + 1);
	if (flag == ' ' && nbr >= 0)
	{
		s[-1] = ' ';
		s--;
	}
	if (flag == '+' && nbr >= 0)
	{
		s[-1] = '+';
		s--;
	}
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}

int	print_u(va_list argptr)
{
	unsigned int	nbr;
	char			str[17];
	char			*s;
	int				printed_chars;

	nbr = va_arg(argptr, unsigned int);
	s = nbr_to_string(nbr, str, 10, 'a');
	printed_chars = ft_putstr((const char *) s);
	return (printed_chars);
}
