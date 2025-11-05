/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:38:12 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/05 11:01:14 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d\n", strcmp(argv[1], argv[2]));
	return (0);
}*/
