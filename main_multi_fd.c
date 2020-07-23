#include "get_next_line.h"
#include <stdio.h>

int	main()
{
	char    *line;
	int     fd1;
	int     fd2;
	int		gnl;

	int		end1 = 0;
	int		end2 = 0;

	fd1 = open("text1.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);

// read and print 1 line from each file by turns, till EOF is reached in both files
while (!end1 || !end2) 
{
// read and print 1 line from text1
	if (!end1)
	{
		gnl = get_next_line(fd1, &line);
		if (gnl == -1)
		{
			printf("An error happened\n");
			break ;
		}
		if (gnl == 1)
			printf("[%s]\n", line);
		if (gnl == 0)
		{
			printf("[%s] ", line);
			printf("EOF-1 reached\n");
			end1 = 1;
		}
	}
//read and print 1 line from text2
	if (!end2)
	{
		gnl = get_next_line(fd2, &line);
		if (gnl == -1)
		{
			printf("An error happened\n");
			break ;
		}
		if (gnl == 1)
			printf("[%s]\n", line);
		if (gnl == 0)
		{
			printf("[%s] ", line);
			printf("EOF-2 reached\n");
			end2 = 1;
		}
	}
};
return (0);
}
