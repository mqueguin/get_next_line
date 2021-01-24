/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <mqueguin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:03:43 by mqueguin          #+#    #+#             */
/*   Updated: 2021/01/24 15:04:01 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

# define MAX_FD 2147483647

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int		ft_check(char *str);

#endif
