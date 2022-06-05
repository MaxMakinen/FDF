/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakinen <mmakinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:35:16 by mmakinen          #+#    #+#             */
/*   Updated: 2022/06/05 10:43:18 by mmakinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_vector	*prep_vector(t_vector *vector)
{
	vector = malloc(sizeof(vector));
	vector->x = 0;
	vector->y = 0;
	vector->z = 0;
	return (vector);
}

t_vector	*vec_adjust(t_vector *vec, t_vector *offset)
{
	vec->x += offset->x;
	vec->y += offset->y;
	vec->z *= offset->z;
	return (vec);
}
