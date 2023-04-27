/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusgon <jesusgon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 09:01:33 by jesusgon          #+#    #+#             */
/*   Updated: 2023/03/29 14:26:20 by jesusgon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/* void	ft_print_array(char *arr)
{
	int	n;

	n = 0;
	while (arr[n] != '\0')
	{
		printf("%c", (arr[n]));
		n++;
	}
	printf("\n");
}

int	main(void)
{
	char	src[] = "Lorem Ipsum";
	char	dest[] = "";

	ft_print_array(src);
	ft_strcpy(dest, src);
	ft_print_array(dest);
} */
