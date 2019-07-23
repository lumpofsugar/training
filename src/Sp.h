#include <iostream>

using namespace std;

template <typename T>
class Sp {
public:
	T value;
	Sp(T value)
	{
		this->value = value;
	}
	void DataTypeSize()
	{
		cout <<"sizeof"<< sizeof(value) << endl;
	}
	void swaping(const vector<int>& a,const vector<int>& b)
	{
		vector<int>v1=a;
		vector<int>v2=b;
		v1.swap(v2);
		for (int i = 0; i < v1.size(); i++)
			cout << "res_swap" << v1.at(i) << endl;
	}
};
