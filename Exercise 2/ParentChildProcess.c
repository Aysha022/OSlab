#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

void main()
{
    int pro;
    pro=fork();

    if(pro < 0)
    {
        printf("error");
    }
    else if(pro == 0)
    {
        printf("parant process ID is %d and child process ID is %d",getppid(),getpid());
        printf("child process terminated !!!");
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("parent process terminated !!!");
        exit(2);
    }
}
