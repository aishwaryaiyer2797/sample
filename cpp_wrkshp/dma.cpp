/*
 *DMA - Dynamioc memory allocation
 *in C++ we have opearator (1)new (2)new[]
 *for deallocation we use (1) delete (2) delete[]
 */

#include <iostream>

using namespace std;

int main()
{
	int i = 10;

	//in c programming
	int *p = (int*)malloc(1 * sizeof(int));
	*p1=100; 
	int *p = (int*)malloc(1 * sizeof(int));

	free(p1);
	free(p2);

	//in C++
	int *p3 =new int;
	int *p4 = new int(100);
	int *p5 = new int[5]; //20 bytes on heap

	delete p3;
	delete p4;
	delete[] p5;

	return 0;
}
