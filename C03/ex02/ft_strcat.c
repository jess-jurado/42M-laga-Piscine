/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusgon <jesusgon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:24:17 by jesusgon          #+#    #+#             */
/*   Updated: 2023/03/30 17:14:37 by jesusgon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	while (dest[n] != '\0')
		n++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	// dest[n] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[] = "Lorem";
	char	s2[] = "Ipsum";

	printf("%s", ft_strcat(s1, s2));
	// printf("\n%s", strcat(s1, s2));
}
