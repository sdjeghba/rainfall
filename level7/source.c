
char  *c;

void	m(void)
{
	printf("%s - %d\n", c, time(NULL));
	return ;
}

int main(int argc, char **argv)
{
  int *s1;
  int *s2;
  int fd;

  s1 = malloc(8);
  s1[0] = 1;
  s1[1] = malloc(8);
  
  s2 = malloc(8);
  s2[0] = 2;
  s2[1]= malloc(8);
  
  strcpy(s1[1], argv[1]);
  strcpy(s2[1], argv[2]);
  
  fd = fopen("/home/user/level7/.pass", "r");
  fgets(c, 68, fd);
  puts("~~");
  return(0);
}
