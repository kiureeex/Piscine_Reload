/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:32:29 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/05 17:02:13 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0')
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(int argc, char **argv)
{
	char	*str;
	
	(void)argc;
	(void)argv;
	
	str = ft_strdup("arrooooooz\0");
	printf("%s", str);
	free(str);
	return (0);
}*/