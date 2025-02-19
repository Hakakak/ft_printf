/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haykharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:48:46 by haykharu          #+#    #+#             */
/*   Updated: 2025/02/14 13:22:39 by haykharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		count;

	va_start(arg, s);
	count = 0;
	count = ft_identify(arg, (char *)s);
	va_end(arg);
	ft_countc_fd('\0', 1, 2);
	return (count);
}

//int main(void) 
//{
//	ft_printf(" % d ", 0);
//	return (0); 
//}	
