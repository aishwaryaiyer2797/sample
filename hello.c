#include<stdio.h>
//Global variable declaration
int gvar_1;
int gvar_2=10;

static int sgvar_1;
static int sgvar_2=20;

//Entry point
int main(int argc, char* argv[])
{
	int loc=10;
	printf("main:%p\n",main);
	printf("gvar_2:%p\n",&gvar_2);
	printf("sgvar_2:%p\n",&sgvar_2);
	printf("gvar_1:%p\n",&gvar_1);
	printf("sgvar_1:%p\n",&sgvar_2);
	printf("loc:%p\n",&loc);
	return 0;
}
