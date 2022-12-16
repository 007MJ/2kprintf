/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:50:52 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/15 20:00:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int n, int *len)
{
	if (n > 9)
		ft_put_u(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}
