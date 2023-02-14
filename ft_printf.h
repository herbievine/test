/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herbie <herbie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:47:58 by herbie            #+#    #+#             */
/*   Updated: 2023/02/14 20:46:26 by herbie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

# ifndef __MACH__
#  define __MACH__ 1
# endif /* __MACH__ */

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
int		ft_intlen(int n);
char	*ft_strchr(const char *s, int c);
int		ft_putnbr_fd(int n, int fd);
int		ft_putunbr_fd(unsigned int n, int fd);
int		ft_puthex_fd(unsigned int n, int fd);
int		ft_puthex_up_fd(unsigned int n, int fd);
int		ft_putptr_fd(void *ptr, int fd);
int		ft_putnbr_base_fd(unsigned long n, char *base, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putchar_fd(char c, int fd);

#endif /* FT_PRINTF_H */