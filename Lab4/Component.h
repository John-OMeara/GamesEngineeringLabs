#pragma once

#include <string>

class Component
{
public:
	Component();
	~Component();

	virtual std::string getType() {
		return "null";
	}
};

