/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 02:36:41 by tprata            #+#    #+#             */
/*   Updated: 2014/09/20 03:02:00 by tprata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

//void	ft_putstr(char *str)
//{
//	int i;
//
//	i = 0;
//	while (str[i] != '\0')
//	{
//		ft_putchar(str[i]);
//		i++;
//	}
//}
char	*ft_strrev(char *str)
{
	int i;
	int tmp;
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	i = 0;
	while (i <= (length / 2))
	{
			tmp = str[i];
			str[i] = str[length - 1];
			str[length - 1] = tmp;
			length--;
			i++;
	}
	return(str);
}

//int		main(int ac, char **av)
//{
//	if (ac == 2)
//		ft_strrev(av[1]);
//	ft_putstr(av[1]);
//	return(0);
//}
// APRES // = A NE PAS PUSH.
