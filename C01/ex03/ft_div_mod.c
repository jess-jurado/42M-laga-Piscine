/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusgon <jesusgon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:59:35 by jesusgon          #+#    #+#             */
/*   Updated: 2023/03/28 13:20:21 by jesusgon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 30;
	y = 4;
	printf("%d %d", x, y);
	ft_div_mod(x, y, &x, &y);
	printf("\n%d %d", x, y);
} */
