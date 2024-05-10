/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:16:08 by yu-chen           #+#    #+#             */
/*   Updated: 2024/04/03 16:43:54 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

char	*ft_strconcat_free(char *s1, char *s2)
{
	int		len_s1;
	int		len_s2;
	char	*s3;
	int		i;

	if (s2 == NULL)
		return (NULL);
	len_s1 = (int)ft_strlen(s1);
	len_s2 = (int)ft_strlen(s2);
	s3 = (char *)malloc(len_s1 + len_s2 + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < len_s1 || i < len_s2)
	{
		if (i < len_s1)
			s3[i] = s1[i];
		if (i < len_s2)
			s3[i + len_s1] = s2[i];
		i++;
	}
	s3[len_s1 + len_s2] = '\0';
	free(s1);
	free(s2);
	return (s3);
}
