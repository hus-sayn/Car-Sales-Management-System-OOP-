#pragma once
#include<iostream>
#include<string>
using namespace std;
class user
{


protected:
	string name;
	string password;
public:
	virtual void login() = 0;




};

