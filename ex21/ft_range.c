/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:22:33 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/05 16:51:27 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*mat;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	mat = (int *)malloc(sizeof(int) * (size + 1));
	if (!mat)
		return (NULL);
	while (i < size)
	{
		mat[i] = min;
		i++;
		min++;
	}
	return (mat);
}
