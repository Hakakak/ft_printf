/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haykharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:47:16 by haykharu          #+#    #+#             */
/*   Updated: 2025/02/14 13:52:53 by haykharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *s, ...);
int		ft_identify(va_list args, char *s);
int		ft_countc_fd(char c, int fd, int mode);
void	ft_putstrc_fd(char *s, int fd);
void	ft_putptr_fd(void *ptr, int fd);
void	ft_putnbrc_fd(int in, size_t un, int mode, int fd);
void	ft_putnbr_hex_fd(int nbr, int is_upper, int hex, int fd);
#endif
