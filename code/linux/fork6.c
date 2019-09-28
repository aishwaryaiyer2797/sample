#include<stdio.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	if(argc!=2){
		fprintf(stderr,"Incorrect number of arguments. P! pass one integer\n");
		return 1;
	}
	pid_t cpid;
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++){
		sleep(30);
		fork();
	}
	fprintf(stderr,"PID=%ld, PPID=%ld\n",(long)getpid(),(long)getppid());
while(1);
}
