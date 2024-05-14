/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:14:37 by yu-chen           #+#    #+#             */
/*   Updated: 2024/05/14 19:11:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_err_msg(char **cmd, char *path)
{
	if (!path && ft_strchr(path, '/') != NULL)
		ft_putstr_fd("No such file or directory :", 2);
	else if (!path)
		ft_putstr_fd("Command not found :", 2);
	else if (access(path, F_OK) == 0 && access(path, X_OK) != 0)
	{
		ft_putstr_fd("Permission denied :", 2);
		ft_putendl_fd(cmd[0], 2);
		free_arr(cmd);
		free(path);
		exit(126);
	}
	if (path)
		free(path);
	ft_putendl_fd(cmd[0], 2);
	free_arr(cmd);
	exit(127);
}

char	*ft_cmd_finder(char **cmd, char **path_arr)
{
	int	i;
	char	*slashcmd;
	char	*tmp;
	char	*fullpath;

	slashcmd = ft_strjoin("/", cmd[0]);
	if (!slashcmd)
		return (NULL);
	i = 0;
	while (path_arr[i])
	{
		tmp = ft_strjoin(path_arr[i], slashcmd);
		if (!tmp)
			return (free(slashcmd), NULL);
		if (access(tmp, F_OK) == 0)
		{
			fullpath = ft_strdup(tmp);
			if (!fullpath)
				return (free(tmp), NULL);
			break;
		}
		free(tmp);
		i++;
	}
	return (free_arr(path_arr), free(slashcmd), fullpath);
}

void	ft_execute(char **cmd, char **env)
{
	char	*path;
	char	**path_arr;
	int	i;

	i = 0;
	if (access(cmd[0], F_OK) == 0)
		path = ft_strdup(cmd[0]);
	else if (env[i])
	{
		while (ft_strncmp(env[i], "PATH=", 5) != 0)
			i++;
		if (env[i])
			path_arr = ft_split(&env[i][5], ':');
		if (!path_arr)
			ft_err_msg(cmd, path);
		path = ft_cmd_finder(cmd, path_arr);
	}
	if (!path)
		ft_err_msg(cmd, path);
	execve(path, cmd, env);
	ft_err_msg(cmd, path);
}