/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeno <xeno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:45:43 by xeno              #+#    #+#             */
/*   Updated: 2018/08/17 14:33:29 by xeno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"

void	vec2_div(t_vec2 *v, double i)
{
	v->x /= i;
	v->y /= i;
}

t_vec2	vec2_div_new(t_vec2 v1, double i)
{
	t_vec2 cpy;

	cpy = vec2_cpy(v1);
	vec2_div(&cpy, i);
	return (cpy);
}