#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[100];
	char	s2[100];
	char	symbol;

	scanf("%s", s1);
	scanf("%s", s2);
		symbol = '=';
	if (ft_strcmp(s1, s2))
		symbol = (ft_strcmp(s1, s2) > 0 ? '>' : '<');
	printf("%s %c %s\n", s1, symbol,s2);
	return (0);
}
