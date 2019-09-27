#include <iostream>
#include <string.h>
using namespace std;

//struct student {
class student {
	public:
	char name[25];
	int id;
};
int main()
{
	int i;
	student ram;
	ram.id =1234;
	strcpy(ram.name, "ram kumar");
	
	return 0;

}
