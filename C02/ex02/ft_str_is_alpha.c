/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusgon <jesusgon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:25:10 by jesusgon          #+#    #+#             */
/*   Updated: 2023/03/28 14:26:18 by jesusgon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;
	int	non_alpha;

	n = 0;
	non_alpha = 0;
	while (str[n] != '\0')
	{
		if ((str[n] > 90 && str[n] < 97) || str[n] < 65 || str[n] > 122)
			non_alpha++;
		n++;
	}
	if (non_alpha == 0 || n == 0)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char    src[] = "Test";

	printf("%i", ft_str_is_alpha(src));
} */
