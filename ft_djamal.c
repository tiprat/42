/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_djamal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprata <tprata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 18:54:29 by tprata            #+#    #+#             */
/*   Updated: 2014/09/19 19:11:47 by tprata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_djamal(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
	{		
		return(i);
	}
	else if((j > i && j < k) || (j > k && j < i))
	{	
		return(j);
	}
	else if((k > i && k < j) || (k > j && k < i))
	{		
		return(k);
	}
	else 
	{
		return(j);
	}
}

int		main(void)
{
	printf("%d\n", ft_djamal(1, 3, 1));
	return(0);
}
