/*
 |TEST|
main.cpp
checks 6 num
between 1...46
No numbers are repeated
use assert.h

 |APPLICATION|
asks for numbers
checs 1...46
No numbers repeated
*/

#include <assert.h>
#include <iostream>
#include <vector>

bool checkRange(std::vector<int> numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] < 1 || numbers[i] > 46)
		{
			return false;
		}
	}
	return true;
}

bool checkAmount(std::vector<int> numbers)
{
	if (numbers.size() != 6) {
		return false;
	}
	else {
		return true;
	}
}

bool checkRepeating(std::vector<int> numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = 0; j < numbers.size(); j++)
		{
			if (i == j)
			{
				return false;
			}
		}
	}
	return true;
}

void main()
{
	std::vector<int> testVector = { 1, 2, 0, 4, 5, 6 };

	assert(checkRange(testVector));
	assert(checkAmount(testVector));
	assert(checkRepeating(testVector));

}