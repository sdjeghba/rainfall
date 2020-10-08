#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

/*
**	We get the effetive suid et guid wich are level1's , and set them to our
**	programm to open the shell. Don't forget that the /tmp setups of our VM
**	disable suid, so we have to put the binary on level1 home.
*/

int	main(int ac, char **av)
{
	if (atoi(av[1]) == 423)
	{
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

