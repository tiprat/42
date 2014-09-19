/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 01:19:13 by tprata            #+#    #+#             */
/*   Updated: 2014/09/20 01:31:59 by tprata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
	{
		ft_putstr("\n");
		return (0);
	}
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((j % 2) == 0)
				ft_putchar(av[i][j]);
			j++;
		}
		ft_putstr("\n");
		i++;
	}
	return (0);
}
