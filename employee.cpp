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

void employee::setaccumPay()
{
	cin >> accumPay;
}

void employee::print()
{
	cout << "����:" << name << "\t" << "���:" << individualEmpNo 
		<< "\t" << "����:" << grade << "\t" << "��н:" 
		<< accumPay << "\t" << endl;
}
