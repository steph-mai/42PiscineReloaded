/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:55:34 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/05 12:14:43 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	int		min = 4;
	int		max = 7;
	int		i = 0;
	int	*tab;

	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
