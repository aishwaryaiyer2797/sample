#include<stdio.h>
#include<unistd.h>

int gvar=555;
int main()
{
	int lvar=54;
	int cpid=fork();
	if(cpid==0)
		printf("\nI am a child process with PID=%ld, gvar=%d, lvar=%d \n",(long)getpid(),gvar,lvar);
	else
		printf("\nI am a parent process with PID=%ld, gvar=%d, lvar=%d\n",(long)getpid(),gvar,lvar);
	
	return 0;
}
