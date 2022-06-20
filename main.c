#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>	
#include <unistd.h>


int main()
{
	char buf[200];
	int fd1, fd2, fd3, fd4, fd5;

	fd1 = open("/proc/meminfo", O_RDONLY);
	if (fd1 > 0) {
		printf("/proc/meminfo:\n");
		read(fd1, buf, 200);
		printf("%s", buf);
	}

	fd2 = open("/proc/cmdline", O_RDONLY);
	if (fd2 > 0) {
		printf("\n/proc/cmdline:\n");
		read(fd2, buf, 200);
		printf("%s", buf);
	}

	fd3 = open("/proc/version", O_RDONLY);
	if (fd3 > 0) {
		printf("\n/proc/version:\n");
		read(fd3, buf, 200);
		printf("%s", buf);
	}

	fd4 = open("/proc/filesystems", O_RDONLY);
	if (fd4 > 0) {
		printf("\n/proc/filesystems:\n");
		read(fd4, buf, 200);
		printf("%s", buf);
	}

	fd5 = open("/proc/mounts", O_RDONLY);
	if (fd5 > 0) {
		printf("\n/proc/mounts:\n");
		read(fd5, buf, 200);
		printf("%s", buf);
	}
	return 0;	
}
