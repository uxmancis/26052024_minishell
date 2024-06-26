/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:37:51 by dbonilla          #+#    #+#             */
/*   Updated: 2024/05/07 18:40:20 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"


int ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v')
		return (1);
    return (0);
}

/* DESCRIPTION:
Outputs the char c to the file descriptor fd.
The function returns the number of characters printed and -1 if fails to print.
---------------------------------------------------------------------------- */