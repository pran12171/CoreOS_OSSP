
#include <stdio.h>
#include sunistd.h>
#include <sys/wait.h>

int main()
char cmd[20];
printf("Enter command: ");
scanf("%s", cnd);

int pid = fork();

if (pid == 0)

printf("Child PID: %d\n", getpid());
execlp(cmd, cmd, NULL);

else

printf("Parent PID: %d\n", getpid());
wait(NULL);
printf("Child completed\n");

return 8