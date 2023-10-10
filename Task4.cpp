///*Write a C++ Program to create a class to represent a bank account. Include The following Memebrs:
//DATA MEMBERS: 
// 1) Name of the depositer
// 2) Account Number
// 3) Type of account
// 4) Balance amount in the account
// 
// MEMBER FUNCTIONS: 
// 1) To assign value
// 2) To deposit an amount
// 3) To withdraw an amount
// 4) To display name and balance
// 
// Write a main program to test the program*/
//

#include<iostream>
#include<string>
using namespace std;

class Bank
{
private:
	string name;
	string AccountNumber;
	string AccountType;
	float balance;
	float balance1;
	float balance2;
public:

	void assign(string n, string number, string type, float b)
	{
		name = n;
		AccountNumber= number;
		AccountType = type;
		balance = b;
		balance2 = b;

	}

	void deposit(float d)
	{
		balance += d;
		balance1 = balance;
	}
	void withdraw(float w)
	{
		balance -= w;
	}

	void display()
	{
		cout << "Name of user is: " << name<< endl;
		cout << "Account number of the user is: " <<AccountNumber<< endl;
		cout << "Type of user account is: " << AccountType<< endl;
		cout << "Balance Befor any transaction: " << balance2 << endl;
		cout << "Balance after deposit: " << balance1 << endl;
		cout << "Balance after withdraw: " << balance << endl;
	}
};


int main()
{
	Bank b;
	b.assign("Ahmad", "112233", "Saving Account", 30000);
	b.deposit(450);
	b.withdraw(10000);
	b.display();
	cout << endl;

	system("pause");
	return 0;
}