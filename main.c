#include "wolf.h"
#include "libft/includes/libft.h"
#include "libft/includes/get_next_line.h"

char		**read_file(char **str, int fd, char **blues)
{
	int		j;

	j = 0;
	*str = (char *)malloc(sizeof(char) * 1);
	while ((get_next_line(fd, str) == 1))
	{
		blues[j] = (char *)malloc(sizeof(char) * 100);
		blues[j] = str[0];
		j++;
	}
	return (blues);
}

int		file_open(int *fd, char *av)
{
	if ((*fd = open(av, O_RDONLY)) < 0)
	{
		perror(av);
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int			lenght;
	int			width;
	int			fd;
	int			**tab;
	char		*str;
	char		**blues;

	blues = (char **)malloc(sizeof(char*) * 100);
	if (ac == 3 || ac == 2)
	{
		if (file_open(&fd, av[1]))
			return (0);
		blues = read_file(&str, fd, blues);
		tab = NULL;
		if ((tab = ft_tab(blues, tab, &lenght, &width)) == 0)
			return (0);
		windows(lenght, width, tab);
	}
	return (0);
}
