#include "hashMap.h"
#include <iostream>
#include <string>

int main()
{
	HashMap <std::string, int > obj;
	obj.insert("TESTING OKAY", 132);
	obj.insert("hello world", 20);
	obj.display();
	return 0;
}