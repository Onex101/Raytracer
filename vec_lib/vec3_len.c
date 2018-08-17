/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeno <xeno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:46:12 by xeno              #+#    #+#             */
/*   Updated: 2018/08/17 14:25:16 by xeno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"

double	vec3_len(t_vec3 v)
{
	return ((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
}

double	vec3_len_sqrt(t_vec3 v)
{
	return(sqrt(vec3_len(v)));
}