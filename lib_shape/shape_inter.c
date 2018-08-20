/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_inter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeno <xeno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:08:37 by xrhoda            #+#    #+#             */
/*   Updated: 2018/08/20 16:33:00 by xeno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_shape.h"



int	shape_inter(t_set s, t_inter i)
{
	int check;
	int i;
	int total;
	t_shape cur_shp;

	total = vector_total(s.shapes);
	check = 0;
	i = 0;
	while (i < total)
	{
		cur_shp = vector_get(s.shapes, i);
		if (inter_check(cur_shp.inter))
			check = 1;
		i++;
	}
	return (check);
}

int shape_ray_inter(t_set s, t_ray)
{
		int check;
	int i;
	int total;
	t_shape cur_shp;

	total = vector_total(s->shapes);
	check = 0;
	i = 0;
	while (i < total)
	{
		cur_shp = vector_get(s->shapes, i);
		if (inter_check(cur_shp.inter))
			check = 1;
		i++;
	}
	return (check);
}