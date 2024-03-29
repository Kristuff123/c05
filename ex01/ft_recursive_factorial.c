/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:47:53 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 12:47:36 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
		if (nb < 0)
		{
				return (0);
		}
		else if (nb <= 1)
		{
				return (1);
		}
		else 
		{
				return (nb * ft_recursive_factorial(nb -1));
		}
}

int		main(int argc, char *argv[])
{
		if (argc != 2)
		{
				printf("usage: %s <number>\n", argv[0]);
				return (1);
		}
		int		n = atoi(argv[1]);
		int		result = ft_recursive_factorial(n);
		printf("factorial of %d is %d\n", n, result);
		return (0);
}
