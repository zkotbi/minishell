/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <student.h42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:24:18 by zkotbi            #+#    #+#             */
/*   Updated: 2024/03/08 23:55:10 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/minishell.h"
#include "test.h"

t_env *unset(t_env	*env, char *name)
{
	t_lst *tmp;
	int i;
	
	tmp = env->front;
	while (tmp != NULL)
	{
		i = 0;
		while (tmp->varible[i] == name[i] && name[i] != 0)
			i++;
		if (name[i] == 0)
			break;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (env);
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	if (tmp->prev == NULL)
		env->front =  tmp->next;
	if (tmp->next == NULL)
		env->back = tmp->prev;
	free(tmp);
	env->size--;
	return (env);
}
