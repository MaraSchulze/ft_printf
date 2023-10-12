/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_functions_bonus.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:34:30 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 18:06:00 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_FUNCTIONS_BONUS_H
# define PRINTER_FUNCTIONS_BONUS_H

int	print_c(va_list argptr);
int	print_s(va_list argptr);
int	print_p(va_list argptr);
int	print_di(va_list argptr, char c);
int	print_u(va_list argptr);
int	print_x(va_list argptr, char c);
int	print_big_x(va_list argptr, char c);
int	print_percent(void);

#endif