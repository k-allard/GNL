#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char* argv[])
{
	char    *line;
	int     fd1;
	int		gnl;
	
	if (argc == 0)
		printf("No args.");
	fd1 = open(argv[1], O_RDONLY);
	gnl = get_next_line(fd1, &line);
	while (gnl == 1)
	{
		printf("[%s]\n", line);
		free(line);
		gnl = get_next_line(fd1, &line);
	}
	if (gnl == 0)
	{
		printf("[%s]\n", line);
		free(line);
		printf("EOF riched\n");
	}
	if (gnl == -1)
		printf("An error happened\n");
	close(fd1);
	getc(stdin);
	return (0);
}
