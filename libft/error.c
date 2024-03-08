/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenouk <hibenouk@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:15:16 by hibenouk          #+#    #+#             */
/*   Updated: 2024/03/08 22:46:57 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void error(const char *name)
{
	ft_printf(2, "nudejs: %s: %s\n", name, strerror(errno));	
}

void error_exit(const char *name, int code)
{
	ft_printf(2, "nudejs: %s: %s\n", name, strerror(errno));	
	exit(code);
}

void check_null(const void *ptr, const char *str)
{
	if (ptr)
		return ;
	ft_printf(2, "nudejs: %s: %s\n", str, strerror(errno));	
	exit(1);
}
