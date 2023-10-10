///*Write a C++ Program to create a class staff having members
//1) Staff Id
//2) Staff Name
//3) Staff basic salary
//4) Functions accept() and display() 
//5_ Calculate secondary = 25% of basic salary, A=800, Income_Tax=15% of basic salary
//   Display The Monthly pay card of staff Using appropriate output format*/
//
//#include<iostream>
//#include <string>
//#include <cstring>
//#include<string.h>
//#include<iomanip>
//using namespace std;
//
//class Staff
//{
//public:
//	int staff_id;
//	string staff_name;
//	double staff_basic_salary;
//	void accept(int id, string name,double salary);
//	void display(int id, string name, double salary);
//
//};
//
//void Staff::accept(int id, string name, double salary)
//{
//	cout << "Enter Staff Id : " << endl;
//	cin >> id;
//	staff_id = id;
//	cout << endl;
//	cout << "Enter Staff Name: " << endl;
//	cin >> name;
//	staff_name = name;
//	cout << endl;
//	cout << "Enter Staff Salary: " << endl;
//	cin >> salary;
//	staff_basic_salary = salary;
//	cout << endl;
//
//}
//
//void Staff::display(int id,string name,double salary)
//{
//	double incometax = 0.15;
//	incometax = incometax*salary;
//	cout << "You have an income tax of " << incometax << endl;
//	salary = salary - incometax;
//	double secondary = 0.25;
//	secondary = secondary*salary;
//	salary = salary + secondary;
//	salary = salary + 800;
//	cout << "Staff Name = " << staff_name << endl;
//	cout << "Staff Id = " << staff_id << endl;
//	cout << "Current Salary = " << salary << endl;
//
//}
//
//int main()
//{
//	cout << setw(73)<< "**-----Staff And Salary Management-----**" << endl;
//	cout << endl;
//	cout << endl;
//	cout << setw(68) <<"Welcome To The Management System" << endl;
//	cout << endl << endl;
//		Staff staffmember;
//		staffmember.accept(staffmember.staff_id, staffmember.staff_name, staffmember.staff_basic_salary );
//		staffmember.display(staffmember.staff_id, staffmember.staff_name,staffmember.staff_basic_salary );
//		system("pause");
//		return 0;
//}
//
