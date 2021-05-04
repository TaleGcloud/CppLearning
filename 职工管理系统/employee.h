#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

//普通职工类
class Employee:public Worker
{
public:
	Employee(int id, string name, int dId);

	virtual void showInfo()
	{

	}

	virtual string getDeptName()
	{

	}
};