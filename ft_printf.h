/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:52:22 by ybendavi          #+#    #+#             */
/*   Updated: 2021/04/28 13:31:37 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

char		*ft_itoa_base(unsigned long long int n, const char *base);
char		*type_flag_handler(char flag, va_list arg, char *flags);
char		*type_flag_handler_p2(char flag, va_list arg, char *flags);
char		*star_flag(va_list arg, char *flags, int n);
char		*flags_for_p(char *flags, char *str);
char		*flags_for_int(char *flags, char *str);
char		*flags_for_char(char *flags, char c);
char		*flags_for_string(char *flags, char *str);
char		*digit_str(char *str, int width);
char		*minus_str(char *str, int width);
char		*zero_str(char *str, int width);
char		*point_str(char *flags, char *str);
char		*minus(int width, char *str);
char		*digit(int width, char *str);
char		*zero(int width, char *str);
char		*point(int width, char *str, char flag, int s);
char		*p_point(int width, char *str, char flag, int s);
char		*inferior_width(int width, char *str, char flag, int size);
char		*superior_width(int width, char *str, char flag, int size);
char		*equal_width(char *str, int size);
char		*str_fuller(char *str, int width, char flag, int i);
char		*p_zero(int width, char *str);
char		*set_flags(const char *format, va_list arg);
char		*set_minus_o_zero(const char *format, char *list);
char		*end_listing(const char *format, char *list, va_list arg,
		int count);
const char	*set_point(const char *format, char *list, va_list arg);
const char	*check_flags(const char *format);
int			check_flags_assets(const char *format, int i);
int			width_size(char *flags);
int			analize_format(const char *format, va_list arg);
int			format_printer(const char *format);
int			calc_width(char	*flags);
int			ft_printf(const char *format, ...);

#endif
