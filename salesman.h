#pragma once
#include"employee.h"
class salesman:public employee
{
public:
	void set_salesman_accumPay();
	void setsale();
private:
	int sale;
};