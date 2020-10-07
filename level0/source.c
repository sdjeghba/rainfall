#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (atoi(av[1]) == 423)
	{
		char *shell = strdup("/bin/sh");
		uid_t euid = geteuid();
		gid_t egid = getegid();
		setresuid(euid, euid, euid);
		setresgid(egid, egid, egid);
		execv("/bin/sh", 0);
	}
	else
		fprintf(stderr, "No !\n");
	return (0);
}
