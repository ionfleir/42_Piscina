/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:19:07 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/06 18:13:55 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int main(void)
{
	int div;
	int mod;
	int a;
	int b;

	a = 8;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d div, %d mod", div, mod);
	return (0);
}*/
