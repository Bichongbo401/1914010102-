#include<iostream>
#include "employee.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"
#include "technician.h"
#include "technicianmanager.h"
using namespace std;
int main()
{
	employee a;
	manager b;
	salesman c;
	salesmanager d;
	technician e;
	technicianmanager f;
	a.setname();
	a.setindividualEmpNo();
	a.setgrade();
	a.setaccumPay(1000);
    b.setname();
	b.setindividualEmpNo();
	b.setgrade();
	b.setaccumPay(1200);
	c.setname();
	c.setindividualEmpNo();
	c.setgrade();
	c.setsale();
	c.set_salesman_accumPay();
	d.setname();
	d.setindividualEmpNo();
	d.setgrade();
	d.set_salesmanager_accumPay(1250);
	e.setname();
	e.setindividualEmpNo();
	e.setgrade();
	e.setworkhour();
	e.set_technician_accumPay();
	f.setname();
	f.setindividualEmpNo();
	f.setgrade();
	f.set_technicianmanager_accumPay(1275);
	a.print();
	b.print();
	c.print();
	d.print();
	e.print();
	f.print();
	return 0;
}