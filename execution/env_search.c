/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_search.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <student.h42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:03:05 by zkotbi            #+#    #+#             */
/*   Updated: 2024/03/08 23:57:26 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/minishell.h"
#include "test.h"

t_lst	*env_search(t_env	*env, char *name)
{
	t_lst	*tmp;
	int i;

	tmp = env->front;
	while(tmp != NULL)
	{
		i = 0;
		while (tmp->varible[i] == name[i] && name[i] != 0)
			i++;
		if (name[i] == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}


int main()
{
	t_env *env;
	
	env = malloc(sizeof(t_env));
	env->size = 2;
	env->front = malloc(sizeof(t_lst));
	env->back = malloc(sizeof(t_lst));
	env->front->prev = NULL;
	env->back->next = NULL;
	env->front->next = env->back;
	env->back->prev = env->front;
	env->front->varible = "hello";
	env->back->varible = "world";
	unsigned int i = 0;
	t_lst *tmp = env->front;
	printf("%ld\n", env->size);
	while (i < env->size)
	{
		printf("node %d name --> %s\n", (i + 1), tmp->varible);
		tmp = tmp->next;
		i++;
	}
	i = 0;
	export_var(env, "test1");
	printf("-------------%ld-------------\n", env->size);
	export_var(env, "test2");
	printf("-------------%ld-------------\n", env->size);
	export_var(env, "test3");
	printf("-------------%ld-------------\n", env->size);
	export_var(env, "test4");
	printf("-------------%ld-------------\n", env->size);
	export_var(env, "test5");
	printf("-------------%ld-------------\n", env->size);
	export_var(env, "test6");
	printf("-------------%ld-------------\n", env->size);
	env = unset(env, "test2");
	tmp = env->front;
	while (i < env->size)
	{
		printf("node %d name --> %s\n", (i + 1), tmp->varible);
		tmp = tmp->next;
		i++;
	}
	printf("-------------%ld-------------\n", env->size);
	printf("to_find ---> %s\n", env_search(env, "world")->varible);
}
