#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

int multiplication(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	if(b!=0)
	{
		return a/b;
	}
	else
	{
		cout<<"Any Number divided by zero is undefined!"<<endl;
		return 0;		//in case of zero.
	}
}

int main()
{
	int a, b;
	char operation;
	
	cout<<"Enter value for first number: "<<endl;
	cin>>a;
	cout<<"Enter value for second number: "<<endl;
	cin>>b;
	
	cout<<"Choose an operation to be applied (+, -, *, /): "<<endl;
	cin>>operation;
	
	switch(operation)
	{
		case '+':
			cout<<"Result: "<<add(a, b)<<endl;
			break;
			
		case '-':
			cout<<"Result: "<<subtract(a, b)<<endl;
			break;
			
		case '*':
			cout<<"Result: "<<multiplication(a, b)<<endl;
			break;
			
		case '/':
			cout<<"Result: "<<divide(a, b)<<endl;
			break;
			default:
				cout<<"Invalid Operater Applied! "<<endl;
	}
	return 0;
}