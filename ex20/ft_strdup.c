#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	while (src[i] != '\0')
		i++;
	res = (char *)malloc(sizeof(char) * i + 1);
	if (!res)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
