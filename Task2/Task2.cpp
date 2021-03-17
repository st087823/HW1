#include<iostream>
#include<math.h>
using namespace std;

double average(int n, ...) 
{
	double sum = 0;
	for (int i = 0; i < n; i++) 
	{
		int* ptr = &n + 1 + i;
		if (i != n - 1) cout << *ptr << " + ";
		else cout << *ptr;
		sum += *ptr;
	}
	cout << " /  " << n << " = ";
	return sum/n;
}

int main()
{
	cout << average(5, 1, 9, 6, 3, 5) << endl;

	return 0;
}