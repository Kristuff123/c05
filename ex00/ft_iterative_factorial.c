/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:33:27 by kristof           #+#    #+#             */
/*   Updated: 2024/01/31 09:46:03 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
		int		i;

		i = 1;
		if (nb < 0)
				return (0);
		else if (nb <= 1)
				return (i);
		while (nb > 0)
		{
				i *= nb;
				nb--;
		}
		return (i);
}

int		main(void)
{
		int		result;
		int		nb = -10;
		result = ft_iterative_factorial(nb);
		printf("%d\n", result);
		
		return (0);
}

