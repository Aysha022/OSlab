//main file
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

void main()
{
    int var;
    var=fork();
    if(var <0)
    {
        printf("error occured !!!!");
    }
    else if(var==0)
    {
        printf("child process started pid %d!!!",getpid());
        execlp("./add","add",NULL);
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("child process completed");
        exit(0);
    }
}

//add file
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the fisrt number : ");
  scanf("%d",&a);
  printf("Enter the second number : ");
  scanf("%d",&b);
  printf("Sum of %d and %d is %d\n",a,b,a+b); 
}
