/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:19:45 by xrhoda            #+#    #+#             */
/*   Updated: 2018/09/27 11:00:15 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int		render(t_param *p)
{
	static int i;

	printf("test render1\n");
	if (!i++)
		ray_trace(p);
	printf("test render2\n");
	mlx_put_image_to_window(p->mlx, p->win, p->img->add, 0, 0);
	printf("test render3\n");
	return (0);
}