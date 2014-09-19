/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 23:53:08 by tprata            #+#    #+#             */
/*   Updated: 2014/09/20 00:01:35 by tprata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_swap(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}

int		main(void)
{
	int a;
	int b;
	char c;

	a = 3;
	b = 5;
	ft_swap(&a, &b);
	ft_putchar('a');
	ft_putchar('=');
	ft_putchar(c = a+48);
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar('=');
	ft_putchar(c = b+48);
	return(0);
}
