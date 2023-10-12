/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_helper_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:33 by marschul          #+#    #+#             */
/*   Updated: 2023/10/12 18:02:37 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_HELPER_BONUS_H
# define BONUS_HELPER_BONUS_H

int		is_flag(char c);
int		is_specifier(char c);
char	get_flag(const char *start, int length, char specifier);

#endif