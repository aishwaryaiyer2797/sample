#include<stdio.h>
#include<stdlib.h>
extern char **environ;
int main()
{
	printf("Environmental variable passes are \n");
	for(int i=0;environ[i]!=NULL;i++)
		printf("environ[%d]:%s\n",i,environ[i]);
	return 0;
}
