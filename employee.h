#pragma once
#include <iostream>
using namespace std;
class employee 
{
public:
	~employee()
	{
		cout << "欢迎使用，再见"<<endl;
	}
	void setname();
	void setindividualEmpNo();
	void setgrade();
	void setaccumPay(int n);
	void print();
private:
	int individualEmpNo;
	char name[40];
	int grade;
	int accumPay;
};