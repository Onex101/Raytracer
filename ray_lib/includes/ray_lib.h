/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:08:36 by xrhoda            #+#    #+#             */
/*   Updated: 2018/08/17 12:18:54 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_LIB_H
# define RAY_LIB_H
# include <math.h>
# include <string.h>
# include "vec_lib.h"

# define RAY_T_MIN 0.0001f
# define RAY_T_MAX 1.0e30f

typedef	struct	s_ray
{
	t_vec2		origin;
	t_vec3		direction;
	double		max;
}				t_ray;

void	vec2_init(t_vec2 *v, double x, double y);
t_vec2	*vec2_new(double x, double y);
t_vec2	*vec2_cpy(t_vec2 *v);
void	vec2_del(t_vec2 *v);

void	vec2_add(t_vec2 *v1, t_vec2 *v2);
void	vec2_sub(t_vec2 *v1, t_vec2 *v2);
void	vec2_mul(t_vec2 *v, double i);
void	vec2_div(t_vec2 *v, double i);

#endif