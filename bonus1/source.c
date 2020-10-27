int main(int argc, char **argv)
{
  char  buff[56];
  size_t  len;

  len = atoi(argv[1]);
  if (len <= 9)
  {
    len = len * 4;
    memcpy(buff, argv[2], len); 
   if (len == 1464814662)
     execl("sh", "/bin/sh", NULL); 
  }
  return(0);
}
