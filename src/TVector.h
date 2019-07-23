#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
template <typename T>
class TVector
{
public:
	T value;
	 TVector(T value) {
		this->value = value;
	}
	 void operation(vector<int>&a, vector<int>&b) {
		 vector<int> v1 = a;
		 vector<int> v2 = b;
		 int tmp;
		 for (int i = 0; i < v2.size(); i++)
		 {
			 tmp = v2.at(i);
			v1.push_back(tmp);
		 }
       sort(v1.begin(), v1.end(), greater<int>());
		 for (int i = 0; i < v1.size(); i++)  
			 cout << "result_vector" << v1.at(i) << endl;
	 };
};

