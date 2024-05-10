/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_euclidean_distance.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:24:40 by yu-chen           #+#    #+#             */
/*   Updated: 2024/04/03 18:23:06 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_euclidean_distance(t_vector a, t_vector b)
{
	return (ft_sqrt(ft_recursive_power(b.x - a.x, 2) + \
		ft_recursive_power(b.y - a.y, 2)));
}
