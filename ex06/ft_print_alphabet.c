#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alph;

	alph = 'a';
	while (alph <= 'z')
	{
		ft_putchar(alph);
		alph++;
	}
}
