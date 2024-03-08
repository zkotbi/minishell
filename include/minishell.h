/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenouk <hibenouk@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:59 by hibenouk          #+#    #+#             */
/*   Updated: 2024/03/08 21:51:55 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <stdio.h>
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <readline/readline.h>
# include <readline/history.h>
typedef struct s_lst
{
	char	*varible;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

typedef struct s_env 
{
	t_lst *front;
	t_lst *back;
	size_t size;
}t_env;
#endif /* !MINISHELL_H */
