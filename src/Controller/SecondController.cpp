/*
 * SecondController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: Rory Baker
 */
#include "SecondController.h"
#include <iostream>
using namespace std;

SecondController :: SecondController()
{
	this->classCount = 21;
}

void SecondController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int SecondController :: getClassCount()
{
	return this->classCount;
}

void SecondController :: start()
{
	cout << "Welcome to my second C++ class this week" << endl;
	cout << "The current number of people in this class is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for classCount" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "The current number of people in this class is " << getClassCount() << endl;

};
