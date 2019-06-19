#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main (int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	int i = 0;
	char buff[26] = {0};

	read(fd, buff, 25);
	while (buff[i])
	{
		buff[i]-=i;
		i++;
	}
	write (1, buff, 25);
	write (1,"\n",1);
	return(0);
}
