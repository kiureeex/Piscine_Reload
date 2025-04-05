/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:55:09 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/04 14:23:42 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main(void)
{
    int    a;
    int    b;

    a = 2;
    b = 4;
    ft_swap(&a, &b);
    printf("a = %d, b = %d   ", a, b);
    return(0);
}*/
