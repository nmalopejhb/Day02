
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putnbr(int nb)
{
	write(1, &nb, 1);
	return (nb);

}

void ft_print_comb2(void) 
{
	int m;
    int l;
	int number;
	int nb= number;


	m = 48 - 1;
	while (++m <= 58)
	{
		l = m;
		while (++l <= 58)
		
			{
				ft_putnbr(m);
				ft_putnbr(l);
				if (m !=55)
				{
					
					ft_putchar(',');
                    
				}
			}
	}
}
