/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_bonus.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:01:30 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 18:05:06 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_FUNCTIONS_BONUS_H
# define HELPER_FUNCTIONS_BONUS_H

size_t	ft_strlen(const char *s);
int		ft_putstr(const char *str);
char	*nbr_to_string(unsigned long int nbr, char str[17], int radix,
			char first_hex);
char	*nbr_to_string_signed(long int nbr, char str[17]);

#endif