/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:48:22 by yu-chen           #+#    #+#             */
/*   Updated: 2024/04/29 16:16:37 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	**ft_dup_matrix(char **map)
{
	char	**dup_map;
	int		n_row;
	int		i;

	i = 0;
	n_row = ft_matrixlen(map);
	dup_map = malloc(sizeof(char *) * (n_row + 1));
	if (!dup_map)
		return (NULL);
	while (map[i])
	{
		dup_map[i] = ft_strdup(map[i]);
		if (!dup_map[i])
		{
			ft_free_matrix(&dup_map);
			return (0);
		}
		i++;
	}
	dup_map[i] = NULL;
	return (dup_map);
}
