#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	printf("pid of example.c=%d\n",getpid());
	char *args[]={"hello",NULL};
	execv("./hello",args);
	printf("back to example.c");
	return 0;
}
