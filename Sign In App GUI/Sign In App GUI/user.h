#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

struct user {

	string name;
	bool status, classification;

	user(string name, bool status, bool classification) {

		this->name = name;
		this->classification = classification;
		this->status = status;

	}

	

};