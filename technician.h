#pragma once
#include "employee.h"
class technician:public employee
{
public:
	void set_technician_accumPay();
	void setworkhour();
private:
	int workhour;
};