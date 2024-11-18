/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:20:49 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/18 23:40:07 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isalnum(int c);
int			ft_isalpha(char c);
int			ft_isdigit(char c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
void		ft_bzero(void *s, size_t n);
void		*memrchr(const void *s, int c, size_t n);
int			memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int n, size_t c);
#endif
