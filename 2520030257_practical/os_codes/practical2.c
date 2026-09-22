#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()

int originalfile, copyfile;
char buffer[100];
int n;

originalfile = open("textfile.txt", O_RDONLY);

copyfile = open("textfile1.txt", 0_WRONLY | O_CREAT , 0644);

n = read(originalfile,buffer,sizeof(buffer));

write(copyfile, buffer,n);

close(originalfile);
close(copyfile);

printf(" ===== the file has been copied succesfully ====== \n");

return 0;