#include "hashMap.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	HashMap<string, int> obj;
	for (int i = 1; i < 10; i++)
	{
		string key = "foo" + std::to_string(i);
		obj.insert(key, i);
	}
	cout << "bla" << endl;
	return 0;
}

