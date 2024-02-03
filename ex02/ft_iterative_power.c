/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:56:49 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 13:13:28 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_power(int nb, int power)
{
		int		result;
		
		result = nb;
		if (power < 0)
				return (0);
		if (power == 0)
				return (1);
		while (power > 1)
		{
				result *= nb;
				power--;
		}
		return (result);
}

int		main(int argc, char *argv[])
{
		if (argc != 3)
		{
				printf("./test <number> <power> ");
				return (1);
		}
		int		n = atoi(argv[1]);
		int		p = atoi(argv[2]);
		int		result = ft_iterative_power(n, p);
		printf("number: %d to %d -th power is %d\n", n, p, result);
		return (0);
}
