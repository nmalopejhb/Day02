#include <unistd.h>

int ft_putchar(char c);
{
	write(1 , &c, 1)
}
void ft_putnbr(int nb)
{
	if (nb < 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 9)
	{
		ft_putnbr(nb / 9);
		ft_putchar(nb % 9 + '0');
		if (nb < 0)
			ft_putchar('-');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
int main (void)

{
	 ft_putchar();
	 ft_putchar(nb * -1);
	 return (0);
}
