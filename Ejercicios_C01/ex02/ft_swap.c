/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:10:25 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/06 13:40:05 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*#include <stdio.h>

int main(void)
{
	int x, y;
	x = 5;
	y = 10;
	ft_swap(&x, &y);
	printf("a = %d b = %d", x, y);
	return (0);
}*/
