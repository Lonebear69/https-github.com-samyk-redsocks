#ifdef __APPLE__
#include <sys/types.h>
#include <unistd.h>

int pipe2(int pipefd[2], int flags)
{
  return 0;
}
ssize_t splice(int fd_in, off_t *off_in, int fd_out, off_t *off_out, size_t len, unsigned int flags)
{
  return 0;
}

#endif