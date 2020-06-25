/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:21:05 by nmalope           #+#    #+#             */
/*   Updated: 2020/06/19 16:25:35 by nmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void	ft_print_alphabet(void)
{
	char  a;
	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
int main()
{
	ft_print_alphabet();
	return(0);
}






