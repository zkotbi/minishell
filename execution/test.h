/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <student.h42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:11:09 by zkotbi            #+#    #+#             */
/*   Updated: 2024/03/08 23:55:33 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../include/libft.h"
#include "../include/minishell.h"
void export_var(t_env	*env, char *name);
t_env *unset(t_env	*env, char *name);
#endif
