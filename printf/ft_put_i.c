/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/15 19:49:45 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_i(int n, int *len)
{
	if (n == INT_MIN)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n > 9)
		ft_put_i(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}
