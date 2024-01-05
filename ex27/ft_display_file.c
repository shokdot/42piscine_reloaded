#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 1024

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

int	validate(int argc)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		desc;
	int		file;
	char	data[BUFF_SIZE];

	if (validate(argc))
		return (1);
	desc = open(argv[1], O_RDONLY);
	if (desc < 0)
	{
		ft_putstr("Cannot read file.");
		return (1);
	}
	file = 1;
	while (file > 0)
	{
		file = read(desc, data, BUFF_SIZE);
		data[file] = '\0';
		ft_putstr(data);
	}
	close(desc);
}
