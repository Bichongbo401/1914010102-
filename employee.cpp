#include "employee.h"
void employee::setname()
{
	cin >> name;
}

void employee::setindividualEmpNo()
{
	cin >> individualEmpNo;
}

void employee::setgrade()
{
	cin >> grade;
}

void employee::setaccumPay(int n)
{
	accumPay = n;
}

void employee::print()
{
	cout << "姓名:" << name << "\t" << "编号:" << individualEmpNo 
		<< "\t" << "级别:" << grade << "\t" << "月薪:" 
		<< accumPay << "\t" << endl;
}
