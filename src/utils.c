/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:14:37 by yu-chen           #+#    #+#             */
/*   Updated: 2024/05/13 23:42:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	ft_execute(char **cmd, char **env)
{
	char	*path;
	int	i;

	i = 0;
	if (access(cmd[0], env) == 0)
		path = ft_strdup(cmd[0]);
	else if (env[i])
	{
		ft_str
	}
		
}