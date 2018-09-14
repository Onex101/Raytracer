/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:19:59 by xrhoda            #+#    #+#             */
/*   Updated: 2018/09/14 10:46:48 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int	main(int argc, char **argv)
{
	t_param *p;
	t_shape sphere0;
	t_shape sphere1;
	t_shape sphere2;
	t_shape plane;
	t_shape cyl;
	t_shape cone;
	char	*name;

	if (argc == 1)
	{
		p = (t_param *)malloc(sizeof(t_param));
		if (init_param(p))
		{
			name  = argv[0];
			cone = cone_new((t_vec3){0, -2, 0}, (t_vec3){0, 1, 0}, 1, (t_colour){0, 255, 0});
			sphere0 = sphere_new((t_vec3){0, -1, 0}, 0.1, (t_colour){0, 255, 0});
			sphere1 = sphere_new((t_vec3){0, -1, -2}, 0.2, (t_colour){255, 255, 0});
			sphere2 = sphere_new((t_vec3){0, -1, 2}, 0.3, (t_colour){0, 0, 255});
			cyl = cyl_new((t_vec3){0, -1, 0}, (t_vec3){0, 1, 1}, (t_colour){0, 0, 255}, 1);
			plane = plane_new((t_vec3){0, 0, 0}, (t_vec3){0, 1, 0}, (t_colour){255, 0, 0});
			vector_add(p->set, &plane);
			vector_add(p->set, &cone);
			// vector_add(p->set, &sphere0);
			// vector_add(p->set, &sphere1);
			// vector_add(p->set, &sphere2);
			mlx_loop_hook(p->mlx, render, p);
			mlx_loop(p->mlx);
		}
		else
		{
			ft_putendl("Error: Failed to Initialize Parameters");
			if (p)
				exit_program(p);
		}
	}
	else
	{
		ft_putendl("Error: To Many Arguments");
		return (1);
	}
	return (0);
}