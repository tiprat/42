/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 01:32:45 by tprata            #+#    #+#             */
/*   Updated: 2014/09/20 00:32:06 by tprata           ###   ########.fr       */
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
char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 1;
	if((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if((str[i] >= 'a') && (str[i] <= 'z') && (str[i - 1] == ' '))
			str[i] = str[i] - 32;
		if((str[i] >= 'A') && (str[i] <= 'Z') &&  (str[i - 1] != ' '))
			str[i] = str[i] + 32;
		if((str[i] >= 'a') && (str[i] <= 'z') &&
		   (((str[i - 1] >= '!') && (str[i - 1] <= '/')) || 
		   ((str[i - 1] >= '[') && (str[i - 1] <= '`')) ||
			((str[i - 1] >= '{') && (str[i - 1] <= '~'))))
			str[i] = str[i] - 32;        
		i++;
	}
	return(str);
}
int		main(int ac, char **av)
{
	if (ac == 2)
		ft_strcapitalize(av[1]);
	ft_putstr(av[1]);
	return(0);
}
