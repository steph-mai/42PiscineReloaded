/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:40 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/03 18:30:31 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n < 0)
		ft_putchar(a);
	else
		ft_putchar(b);
}

/*int	main(void)
{
	int	i;

	i = 0;
	ft_is_negative(i);
	return (0);
}*/
