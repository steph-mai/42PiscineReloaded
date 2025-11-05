/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:07:15 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/05 08:43:22 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}
*/
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc == 1)
		return (-1);
	else
	{
		i = 1;
		j = 0;
		c = '\n';
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar(c);
			i++;
		}
	}
	return (0);
}
