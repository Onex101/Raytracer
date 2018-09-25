/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advance.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:49:41 by shillebr          #+#    #+#             */
/*   Updated: 2018/09/21 11:18:39 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int		ft_advance(char *str, int i)
{
	int		j;

	j = i;
	while (str[j] && '0' <= str[j] && str[j] <= '9')
		j++;
	return (j);
}