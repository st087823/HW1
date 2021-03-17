#include<iostream>
#include<math.h>
using namespace std;

void printBits(int a) 
{
	int bitlength = sizeof(a) * 8; // =32
	for (int i = 0; i < bitlength; i++) 
	{
		unsigned int bit = a;
		bit = bit << i;
		bit = bit >> (bitlength - 1);

		if (i % 8 == 0) { cout << " "; }
		cout << bit;
	}
}

void printBits(long a)
{
	int bitlength = sizeof(a) * 8; 
	for (int i = 0; i < bitlength; i++)
	{
		unsigned long bit = a;
		bit = bit << i;
		bit = bit >> (bitlength - 1);

		if (i % 8 == 0) { cout << " "; }
		cout << bit;
	}
}

void printBits(long long a)
{
	int bitlength = sizeof(a) * 8; 
	for (int i = 0; i < bitlength; i++)
	{
		unsigned long long bit = a;
		bit = bit << i;
		bit = bit >> (bitlength - 1);

		if (i % 8 == 0) { cout << " "; }
		cout << bit;
	}
}

void printBits(float a) 
{
	int bitlength = sizeof(a) * 8; //= 32
	for (int i = 0; i < bitlength; i++) 
	{
		void* ptr = &a;
		unsigned int bit = *(int*)(ptr);
		bit = bit << i;
		bit = bit >> (bitlength - 1);
		if (i % 8 == 0) cout << " ";
		cout << bit;
	}
}

void printBits(double a)
{
	int bitlength = sizeof(a) * 8; //= 64
	for (int i = 0; i < bitlength; i++)
	{
		void* ptr = &a;
		unsigned long long int bit = *(long long int*)(ptr);
		bit = bit << i;
		bit = bit >> (bitlength - 1);
		if (i % 8 == 0) cout << " ";
		cout << bit;
	}
}

void printBits(long double a)
{
	int bitlength = sizeof(a) * 8; //= 64
	for (int i = 0; i < bitlength; i++)
	{
		void* ptr = &a;
		unsigned long long int bit = *(long long int*)(ptr);
		bit = bit << i;
		bit = bit >> (bitlength - 1);
		if (i % 8 == 0) cout << " ";
		cout << bit;
	}
}

int main()
{
	//cout << "float:  " << sizeof(float) << endl; // 4
	//cout << "double:  " << sizeof(double) << endl; // 8
	int numb_int;
	cout << "int number:  ";
	cin >> numb_int;
	printBits(numb_int);
	cout << endl;

	int long numb_int_l;
	cout << "int long number:  ";
	cin >> numb_int_l;
	printBits(numb_int_l);
	cout << endl;

	int long long numb_int_ll;
	cout << "int long long number:  ";
	cin >> numb_int_ll;
	printBits(numb_int_ll);
	cout << endl;

	float numb_float;
	cout << "float number:  ";
	cin >> numb_float;
	printBits(numb_float);
	cout << endl;

	double numb_double;
	cout << "double number:  ";
	cin >> numb_double;
	printBits(numb_double);
	cout << endl;

	long double numb_double_l;
	cout << "long double number:  ";
	cin >> numb_double_l;
	printBits(numb_double_l);
	cout << endl;

	return 0;
}