/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:15:31 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 13:34:21 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_power(int nb, int power)
{		
		int		out;
		
		out = nb;
		if (power < 0)
				return (0);
		else if (power == 0)
				return (1);
		else if (power > 1)
				return (out * ft_recursive_power(out, power - 1));
		else
				return (out);
}

int		main(int argc, char *argv[])
{
		if (argc != 3)
		{
				printf("wrong usage. need 2 parameters");
				return (1);
		}
		int n = atoi(argv[1]);
		int p = atoi(argv[2]);
		int wynik = ft_recursive_power(n, p);
		printf(" %d\n", wynik);
		return (0);
}
