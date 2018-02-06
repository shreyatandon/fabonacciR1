#include<iostream>
using namespace std;

int fabonacci(int x);	//function declaration

int fabonacci(int x)	//function defination
{
	if (x == 1)
	
		return 1;

	

	else if (x == 2)
	
		return 2;
	
	else 
	{
		return fabonacci(x - 1) + fabonacci(x - 2);
		cout<< fabonacci(x - 1) + fabonacci(x - 2);
	}

}

int main()
{
	int x;
	cin >> x;
	cout << fabonacci(x);	//function calling
	getchar();
	getchar();
	return 0;

}

