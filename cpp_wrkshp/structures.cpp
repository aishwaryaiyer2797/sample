#include <iostream>
using namespace std;

//in C programming
struct dataPacket { 
	char data[25];
	int id;
//void function() //functions are not allowed in c structures
//{
//}
};

struct dataPacket pkt; // define the structure variable

//in C++
struct datapacket {
	char data[25];
	int id;
	void function()
	{}
};

datapacket pkt;
int main()
{
	return 0;
}
