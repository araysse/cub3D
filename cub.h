/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araysse <araysse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:54:16 by araysse           #+#    #+#             */
/*   Updated: 2023/01/19 15:30:10 by araysse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_let
{
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	char	*f;
	char	*c;
	int		f_n;
	int		c_n;
	char	**map;
	int		x;
	int		y;
	char	vue;
}	t_let;

char	*get_next_line(int fd);
int		ft_strlen(char const *str);
int		ft_strlens(char **str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, int start, int len);
char	**ft_split(char *s, char c);
char	*ft_strchr(char *s, int c);
char	*ft_strtrim(char *s1, char const *set, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_eror(int i);
void	ft_check_map(char *s, t_let **let);
char	*ft_strdup(char *src);
int		ft_atoi(const char *str);
void	ft_f_check(t_let **let);
void	ft_c_check(t_let **let);
void	ft_free_split(char **str);
void	add_to_struct(char **split, t_let **let, char **copy);
void	ft_check_space(char **split);
void	ft_last_check(char *v);
char	*find_map(char *v);
int		ft_calcul_fc(int first, int second, int third);
void	ft_check_path(char *v, t_let **let);
void	ft_check_eror(char **str);

#endif