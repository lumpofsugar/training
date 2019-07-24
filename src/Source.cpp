#include <iostream>
#include <vector>
#include <stack>

#include "Sp.h"
#include "TVector.h"
#include "Bit.h"

using namespace std;

void swaping(const vector<int>& a, const vector<int>& b) {
	vector<int>v1 = a;
	vector<int>v2 = b;
	v1.swap(v2);
	for (int i = 0; i < v1.size(); i++)
		cout << "res_swap:" << v1.at(i) << endl;
}

void operation(vector<int>& a, vector<int>& b) {
	vector<int> v1 = a;
	vector<int> v2 = b;
	int tmp;
	for (int i = 0; i < v2.size(); i++) {
		tmp = v2.at(i);
		v1.push_back(tmp);
	}
	sort(v1.begin(), v1.end(), greater<int>());
	for (int i = 0; i < v1.size(); i++)
		cout << "result_vector:" << v1.at(i) << endl;
}

void reverse(int val) {
	stack <int> buffer;
	while (val > 0) {
		buffer.push(val % 2);
		val /= 2;
	}
	while (!buffer.empty()) {
		cout << buffer.top();
		buffer.pop();
	}
}

int main()
{
	vector<int>myVector;
	myVector.push_back(4);
	myVector.push_back(7);
	myVector.push_back(9);
	for (int i = 0; i < myVector.size(); i++)
		cout <<"v1:"<< myVector.at(i) << endl;
	vector<int>myVector2;
	myVector2.push_back(4);
	myVector2.push_back(6);
	myVector2.push_back(3);
	for (int i = 0; i < myVector2.size(); i++)
		cout <<"v2:"<< myVector2.at(i) << endl;
	swaping(myVector, myVector2);
	operation(myVector, myVector2);
	reverse(42);
	system("pause");
	return 0;
}