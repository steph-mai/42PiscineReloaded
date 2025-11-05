/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:37:15 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/04 13:52:43 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{	int	temp;
	
	temp = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return(nb * ft_recursive_factorial(nb - 1));
}

/*#include<stdio.h>

int     main(void)
{       
        int     nb;

        nb = 9;
        printf("nb = %d\n", nb);
        printf("%d\n", ft_recursive_factorial(nb));
        return (0);
}*/
