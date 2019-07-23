#include <iostream>
#include <vector>
#include "Sp.h"
#include "TVector.h"
#include "Bit.h"
using namespace std;
int main()
{
		vector<int>myVector;
	myVector.push_back(4);
	myVector.push_back(7);
	myVector.push_back(9);
	for (int i = 0; i < myVector.size(); i++)
		cout <<"v1_"<< myVector.at(i) << endl;
		vector<int>myVector2;
	myVector2.push_back(4);
	myVector2.push_back(6);
	myVector2.push_back(3);
	for (int i = 0; i < myVector2.size(); i++)
		cout <<"v2_"<< myVector2.at(i) << endl;
		Sp<int> c(1);
		TVector<int> sm(1);
		sm.operation(myVector, myVector2);
		 c.swaping(myVector, myVector2);
		 int a;
		 int tm;
		 cin >> a;
		 TBit ab;
		  ab.operation(a);
	system("pause");
	return 0;
}