/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:15:23 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:55 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div1;
	int	div2;

	div1 = *a / *b;
	div2 = *a % *b;
	*a = div1;
	*b = div2;
}

/*#include <stdio.h>
int	main()
{
	int a;
	int b;

	a = 8;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d div1, %d div2", a, b);
	return 0;
}*/
