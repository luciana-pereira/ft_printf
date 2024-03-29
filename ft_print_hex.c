/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:23:10 by lucperei          #+#    #+#             */
/*   Updated: 2022/07/17 03:45:20 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex(unsigned int n, int c)
{
    int len;

    len = 0;
    if (n >= 16)
    {
        len += print_hex(n / 16, c);
        len += print_hex(n % 16, c);
    }
    if (n < 16)
    {
        if (n < 10)
        {
            len += print_char(n + 48);
        }
        else
        {
            if (c == 1)
                len += print_char(n + 87);
            else
                len += print_char(n + 55);
        }
    }
    return (len);
}
