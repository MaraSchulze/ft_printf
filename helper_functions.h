/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:01:30 by marschul          #+#    #+#             */
/*   Updated: 2023/07/17 19:09:49 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H

size_t	ft_strlen(const char *s);
int		ft_putstr(const char *str);
char	*nbr_to_string(unsigned long int nbr, char str[17], int radix,
			char first_hex);
char	*nbr_to_string_signed(long int nbr, char str[17]);

#endif