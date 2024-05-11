#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 100

void main() 
{
    int fid; 
    char read[SIZE];
    
    fid = open("sample.txt", O_RDWR );

    if (fid == -1) 
    {
        perror("open");
        exit(EXIT_FAILURE);
    }
    write(fid, "Hello World\n", 12);
    close(fid);

    fid = open("sample.txt", O_RDONLY);
    if (fid == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    read(fid, read, SIZE);
    close(fid);

    printf("Data read from file: %s\n", read);
}
