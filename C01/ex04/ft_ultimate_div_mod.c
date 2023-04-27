/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusgon <jesusgon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:39:35 by jesusgon          #+#    #+#             */
/*   Updated: 2023/03/28 16:12:21 by jesusgon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 30;
	y = 4;
	printf("%d %d", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("\n%d %d", x, y);
} */
