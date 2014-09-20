/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 01:48:02 by tprata            #+#    #+#             */
/*   Updated: 2014/09/20 01:59:43 by tprata           ###   ########.fr       */
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
char	*rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'y'))
			str[i] = str[i] + 1;
		if (str[i] == 'z')
			str[i] = str[i] - 25;
		if ((str[i] >= 'A') && (str[i] <= 'Y'))
			str[i] = str[i] + 1;
		if (str[i] == 'Z')
			str[i] = str[i] - 25;
		i++;
	}
	return(str);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("\n");
	if (ac == 2)
		rotone(av[1]);
	ft_putstr(av[1]);
	ft_putstr("\n");
	return(0);
}
