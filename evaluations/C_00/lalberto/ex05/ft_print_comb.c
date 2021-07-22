#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	vet[3];

	vet[0] = '0' - 1;
	while (++vet[0] < '8')
	{
		vet[1] = vet[0];
		while (++vet[1] < '9')
		{
			vet[2] = vet[1];
			while (++vet[2] <= '9')
			{
				ft_putchar(vet[0]);
				ft_putchar(vet[1]);
				ft_putchar(vet[2]);
				if (vet[0] != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
