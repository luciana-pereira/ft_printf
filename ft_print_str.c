/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 03:20:08 by lucperei          #+#    #+#             */
/*   Updated: 2022/07/25 02:20:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_str(char *str)
{
    int len;

    len = 0;
    if (!str)
    {
        str = "(null)";
    }
    while (*str)
    {
        len += write(1, str++, 1);
    }
    return (len);
}
