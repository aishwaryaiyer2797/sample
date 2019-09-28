#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int cpid=fork();
	if(cpid==0)
		printf("\nHello I'm child process\n");
	else
		printf("\nHello I'm parent process\n");
	return 0;
}
