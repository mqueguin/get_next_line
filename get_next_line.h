/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <mqueguin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:14:23 by mqueguin          #+#    #+#             */
/*   Updated: 2021/01/24 12:29:51 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

# define MAX_FD 2147483647

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int		ft_check(char *str);

#endif
