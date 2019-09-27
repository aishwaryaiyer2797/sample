#include <iostream>
#include <string>
using namespacestd;

class myclass {
	//datamembers
	private:
	string name; //string is c++ userdefined datatype
	int id;

	//member functions
	void memfun() {
	cout << "memfun()" called..! << endl;
	}	
	public:
	int test;
	void mefun2() {
	cout << "memfun2()" called..! << endl;
	}
};
int main()
{
	myclass obj;
//	obj.id =10;
//	obj.name = "ram";//noy possible bacause they are private
	obj.test =100;
	
	return 0;
}
