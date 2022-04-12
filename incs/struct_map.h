/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_map.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkieth <jkieth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:46:44 by jkieth            #+#    #+#             */
/*   Updated: 2022/04/10 20:50:39 by jkieth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_MAP_H
# define STRUCT_MAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map{
	char	**all_map;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	int		floor_rgb[3];
	int		ceil_rgb[3];
}	t_map;

#endif /*STRUCT_MAP_H*/
