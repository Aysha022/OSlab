Sender.c
--------
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>

typedef struct 
{
  char msg[100];
  int c,exit;
}resource;
