/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:54:01 by lgarse            #+#    #+#             */
/*   Updated: 2019/11/29 14:47:37 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnstr(char const *s, int i, t_print *ssl)
{
	int j;
	int k;

	k = 0;
	j = i;
	if (s)
	{
		while (i--)
		{
			ft_putchar(s[k], ssl);
			k++;
		}
	}
}
