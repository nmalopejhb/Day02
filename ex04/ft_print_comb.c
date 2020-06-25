#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void ft_print_comb(void)
{
	int m;
	int r;
	int l;

	m = 48 - 1;
	while (++m <= 57)
	{
		r = m;
		while(++r <= 57)
		{
			l = r;
			while(++l <= 57)
			{
				ft_putchar(m);
				ft_putchar(r);
				ft_putchar(l);
					if (m !=72)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}	
}


