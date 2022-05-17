#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char* argv[])
{ printf("Parent process!\n");
int ret = fork();
if (ret <0){
perror("fork");
exit(1);
}
else if(ret==0)
{ printf("Child process!\n");
// execl("/bin/ls","ls","-l",(char*)NULL);
//char *args[] = {"ls","-l",NULL};
//execv("/bin/ls",args);
execlp("ls", "ls","-l",(char*)NULL);
//char *args[]={"ls","-l",NULL};
//execvp("ls",args);
}
else{wait(NULL);
} return