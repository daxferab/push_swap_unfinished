/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferab <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:06:28 by daxferab          #+#    #+#             */
/*   Updated: 2024/03/22 19:10:37 by daxferab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int main(void)
{
	char str1[] = "Hello, World!";
	printf("String: \"%s\"\nLength: %d\n\n", str1, ft_strlen(str1));

	return 0;
}
*/