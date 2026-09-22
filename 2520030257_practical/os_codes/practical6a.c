#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
char msg[100];

printf("Enter message: ");
fgets(msg, sizeof(msg), stdin);

int fd = open("fifo", 0_WRONLY);

write(fd, msg, sizeof(msg));

close(fd);

return 0;