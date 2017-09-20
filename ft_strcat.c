#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int	i;
	
	i = ft_strlen(s1);
	while (*s2)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}

int		main()
{
	char b[50]  = "This is source";
	char a[50] = "This is destination";

	printf("%s\n", ft_strcat(a, b));
}

