#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
char msg[100];

mkfifo("fifo", 0666);

int fd = open("fifo", 0_RDONLY);

read(fd, msg, sizeof(msg));

printf("Client: %s\n", msg);

close(fd);

return 0;