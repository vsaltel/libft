#include "../libft.h"
#include <string.h>

	int	main(int argc, char **argv)
	{
		char **tab;
		char *s;
		int i;
		int k;

		s = argv[1];
		i = 0;
		tab = ft_strsplit(s, ' ');
		while (tab[i] != 0)
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
		//ft_putstr(strncpy(str1, str2, 8));
		/*
		ft_putnbr(atoi(argv[1]));
		ft_putchar('\n');
		ft_putnbr(ft_atoi(argv[1]));
		*/
		/*

		strcpy(str1, str2);	
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		str1 = ft_strstr(str1, str2);
	if (str1 != NULL)
		ft_putstr(str1);
	ft_putchar('\n');
	*/
/*
	int tab[5];
	int i;
	while (i < 5)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	memset(tab, 1, 2);	
	while (i < 5)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	*/
	return (0);
}
