/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <student.h42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:24:23 by zkotbi            #+#    #+#             */
/*   Updated: 2024/03/08 23:31:01 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/minishell.h"
#include <libc.h>
#include <stdlib.h>

void export_var(t_env	*env, char *name)
{
	t_lst *tmp;
	
	tmp = env->back->prev;
	env->back->prev = malloc(sizeof(t_lst));
	// check_null(env->back->prev, "malloc");
	env->back->prev->varible = name;
	env->back->prev->next = env->back;
	env->back->prev->prev = tmp;
	tmp->next = env->back->prev;
	env->size++;
}

// int main()
// {
// 	t_env *env;
// 	
// 	env = malloc(sizeof(t_env));
// 	env->size = 2;
// 	env->front = malloc(sizeof(t_lst));
// 	env->back = malloc(sizeof(t_lst));
// 	env->front->prev = NULL;
// 	env->back->next = NULL;
// 	env->front->next = env->back;
// 	env->back->prev = env->front;
// 	env->front->varible = "hello";
// 	env->back->varible = "world";
// 	unsigned int i = 0;
// 	t_lst *tmp = env->front;
// 	printf("%ld\n", env->size);
// 	while (i < env->size)
// 	{
// 		printf("node %d name --> %s\n", (i + 1), tmp->varible);
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	i = 0;
// 	export_var(env, "test1");
// 	printf("-------------%ld-------------\n", env->size);
// 	export_var(env, "test2");
// 	printf("-------------%ld-------------\n", env->size);
// 	export_var(env, "test3");
// 	printf("-------------%ld-------------\n", env->size);
// 	export_var(env, "test4");
// 	printf("-------------%ld-------------\n", env->size);
// 	export_var(env, "test5");
// 	printf("-------------%ld-------------\n", env->size);
// 	export_var(env, "test6");
// 	printf("-------------%ld-------------\n", env->size);
// 	tmp = env->front;
// 	while (i < env->size)
// 	{
// 		printf("node %d name --> %s\n", (i + 1), tmp->varible);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }
