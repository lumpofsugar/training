#include <iostream>

using namespace std;
class TBit
{
public:
	int result[100];
	int arr[100];
	int operation(int &val)
	{
		int i = 1;
		int j = 0;
		int *num = &val;
		while (*num > 0)
		{
			result[i] = (*num % 2);
			*num = *num / 2;
			i++;
		}
		i--;
		cout << "transfer" << endl;
		while (i != 0) {
			arr[j] = result[i];
			cout << result[i];
			j++;
			i--;
		}
		return 1;
	};
};