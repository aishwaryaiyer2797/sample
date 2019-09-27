#include <iostream>
using namespace std;

//function declarations are must
//void myswap(int,int); //function declaration,fun prototype
void myswap(int*,int*);
void myswap(int&, int&);
int main()
{
	int a=10;
	int b=20;

//	myswap(a,b); //function call, argumrnts are passed by value
	myswap(a,b); //functio call,arguments are passe by reference
	cout <<"a=" <<a << "," << "b" << b << endl;	
	myswap(&a,&b);
	cout <<"a=" << a << "," << "b=" << b << endl;
	return 0;
}

//function defination
/*
void myswap(int i,int j)
{
	int temp =i;
	i=j;
	j=temp;

}
*/
void myswap(int *i, int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

void myswap(int& i, int& j)
{
	int temp= i;
	i = j;
	j = temp;

}
