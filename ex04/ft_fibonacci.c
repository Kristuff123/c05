/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:46:18 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 12:17:00 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index)
{
		if (index < 0)
			{
				return -1;
			} 
		else if (index == 0)
			{
        		return 0;
			} 
		else if (index == 1 || index == 2) 
			{
        		return 1;
			}
		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int		main(int argc, char *argv[])
{
		if (argc != 2)
		{
				printf("usage: %s <index>\n", argv[0]);
				return (1); //error
		}
		int		n = atoi(argv[1]);
		int 	result = ft_fibonacci(n);
		printf("%s The Fibonacci sequence at index %d is: %d\n", argv[0], n, result);
 		return 0;
}
