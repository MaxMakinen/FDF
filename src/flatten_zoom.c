/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flatten_zoom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakinen <mmakinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:48:14 by mmakinen          #+#    #+#             */
/*   Updated: 2022/05/05 12:48:17 by mmakinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	flatten(t_data *data, int num)
{
	if (num < 0)
		data->map->offset.z -= 0.1f;
	else
		data->map->offset.z += 0.11f;
}

void	zoom(t_data *data, int range)
{
	data->map->zoom += range;
}
