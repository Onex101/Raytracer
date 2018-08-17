/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_mul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeno <xeno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:45:11 by xeno              #+#    #+#             */
/*   Updated: 2018/08/17 14:24:32 by xeno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"

void	vec3_mul(t_vec3 *v, double i)
{
	v->x *= i;
	v->y *= i;
	v->z *= i;
}

t_vec3	vec3_add_new(const t_vec3 v1, double i)
{
	t_vec3 cpy;

	cpy = vec3_cpy(v1);
	vec3_mul(&cpy, i);
	return (cpy);
}