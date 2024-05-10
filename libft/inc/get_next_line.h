/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:54:41 by yu-chen           #+#    #+#             */
/*   Updated: 2024/04/03 16:10:51 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_and_updateleft(int fd, char *left_str);
char	*get_line(char *left_str);
char	*new_left_str(char *left_str);
size_t	ft_strlen_gnl(const char *str);
char	*ft_strchr_gnl(char *str, int c);
char	*ft_strjoin_gnl(char *left_str, char *buff);
#endif