#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
void *myThreadFun(void *vargp)
{
	int *myid=(int*)vargp;
	static int s=0;	
	sleep(30);
	//printf("Printing GeeksQuiz from thread\n");
	//return NULL;
	++s;++g;
	printf("Thread ID:%d, STatic:%d, Global:%d\n",*myid,++s,++g);
}

int main()
{
	int i;
	pthread_t tid;
	for(i=0;i<10;i++)	
		pthread_create(&tid,NULL,myThreadFun,(void*)&tid);
	pthread_exit(NULL);
	return 0;
	/*pthread_t thread_id;
	printf("Before Thread\n");
	pthread_create(&thread_id,NULL,myThreadFun,NULL);
	pthread_join(thread_id,NULL);
	printf("After thread\n");
	exit(0);*/
}
