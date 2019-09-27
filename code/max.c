#include<stdio.h>
#define max 16

int a[max]={1,5,7,10,12,14,15,18,20,22,25,27,300,64,110,220};
int main()
{
	int maximum=0;
	for(int i=0;i<16;i++){
	if(a[i]>maximum)
		maximum=a[i];
	}
	printf("Max: %d\n",maximum);
}
