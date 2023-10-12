/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:34:30 by marschul          #+#    #+#             */
/*   Updated: 2023/07/17 19:35:11 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_FUNCTIONS_H
# define PRINTER_FUNCTIONS_H

int	print_c(va_list argptr);
int	print_s(va_list argptr);
int	print_p(va_list argptr);
int	print_di(va_list argptr);
int	print_u(va_list argptr);
int	print_x(va_list argptr);
int	print_big_x(va_list argptr);
int	print_percent(void);

#endif