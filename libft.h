/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:00:22 by penzo             #+#    #+#             */
/*   Updated: 2018/11/10 20:05:47 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef LIBFT_H
#define LIBFT_H
int		ft_tolower(int c);
int		ft_toupper(int c);
int     ft_isprint(int c);
int     ft_isascii(int c);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
int		ft_strequ(char const *s1, char const *s2);
#endif
