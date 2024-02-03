/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:42:50 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 13:54:21 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
		int		i;

		i = 1;
		if (nb > 0)
		{
				while (i * i <= nb)
				{
						if (i * i == nb)
								return (i);
						if (i > 46340)
								return (0);
						i++;
				}
		}
		return (0);
}

int		main()
{
		int numer;
		int	wynik;

		numer = 200;
		wynik = ft_sqrt(numer);
		printf("wynik to %d\n", wynik);
		return (0);
}
