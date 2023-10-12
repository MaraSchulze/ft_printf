/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:35:50 by marschul          #+#    #+#             */
/*   Updated: 2023/10/11 18:58:37 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/*
str must be smaller than greatest int for that to work.
ssize_t will be downgecastet to int.
*/
int	ft_putstr(const char *str)
{
	ssize_t	written_bytes;

	written_bytes = write(1, str, ft_strlen(str));
	if (written_bytes == -1)
		return (-1);
	else
		return ((int) written_bytes);
}

/*
The function fills in the str buffer from the end and
 returns a pointer to the beginning.
first_hex is not needed in the case of radix = 10.
first_hex is either a or A.
*/
char	*nbr_to_string(unsigned long nbr, char str[17], int radix,
			char first_hex)
{
	char	current;
	int		i;

	str[16] = '\0';
	if (nbr == 0)
	{
		str[15] = '0';
		return (str + 15);
	}
	i = 15;
	while (nbr != 0)
	{
		current = nbr % radix;
		if (current < 10)
			str[i] = '0' + current;
		else
			str[i] = first_hex + current - 10;
		nbr = nbr / radix;
		i--;
	}
	return (str + i + 1);
}

char	*nbr_to_string_signed(long int nbr, char str[17])
{
	char	*s;
	int		minus;

	minus = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		minus = 1;
	}
	s = nbr_to_string(nbr, str, 10, 'a');
	if (minus)
	{
		s--;
		*s = '-';
	}
	return (s);
}
