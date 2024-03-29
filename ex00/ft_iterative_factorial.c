/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:33:27 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 12:54:51 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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

int		main(int argc, char *argv[])
{
		if (argc != 2)
		{
				printf("usage %s <number>\n", argv[0]);
				return (1);
		}
		int		result;
		int		nb = atoi(argv[1]);
		result = ft_iterative_factorial(nb);
		printf("factorial of %d is %d\n", nb, result);
		
		return (0);
}

