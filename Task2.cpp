///*Write a function to recursively see if a number is prime or not, the function should return true when
//the base case has met, false otherwise.*/
//
//#include<iostream>
//using namespace std;
//
//bool checkPrime(int num, int numSubtract)
//{
//	if (num%numSubtract == 0 && numSubtract != 1)
//	{
//		return false;
//	}
//	else {
//		if (numSubtract == 1)
//			return true;
//		else
//			return checkPrime(num, numSubtract - 1);
//	}
//}
//
//int main()
//{
//	cout << "--Program to Check if a number is prime or not--" << endl;
//	int n;
//	cout << "Enter a number: ";
//	cin >> n;
//	int num=checkPrime(n,n-1);
//	if (num == 1)
//		cout<<n << " is a Prime number"<<endl;
//	else if (num ==0)
//		cout<< n<< " is Not a prime number"<<endl;
//	cout << endl;
//	system("pause");
//}
//
