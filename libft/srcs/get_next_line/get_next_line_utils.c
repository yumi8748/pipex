/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:54:38 by yu-chen           #+#    #+#             */
/*   Updated: 2024/04/19 14:23:46 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_next_line.h"
#include "../../inc/libft.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	if (c == '\0')
		return ((char *)&str[ft_strlen_gnl(str)]);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	if (!left_str)
	{
		left_str = malloc(sizeof(char) * 1);
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	new_str = malloc((ft_strlen_gnl(left_str) + ft_strlen_gnl(buff) + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	if (left_str)
		while (left_str[++i] != '\0')
			new_str[i] = left_str[i];
	j = 0;
	while (buff[j] != '\0')
		new_str[i++] = buff[j++];
	new_str[ft_strlen_gnl(left_str) + ft_strlen_gnl(buff)] = '\0';
	free(left_str);
	return (new_str);
}
