/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 05:01:08 by lucperei          #+#    #+#             */
/*   Updated: 2022/07/24 22:11:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_uns(unsigned int c)
{
    int len;

    len = 0;
    if (c >= 10)
    {
        len += print_uns(c / 10);
        len += print_uns(c % 10);
    }
    if (c < 10)
    {
        len += print_char(c + 48);
    }
    return (len);
}
