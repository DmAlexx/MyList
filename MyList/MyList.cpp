#include "MyList.h"
#include <iostream>

int main()
{
	List<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(10);
	lst.push_back(11);
	lst.print();
	lst.insert(7, 55);
	lst.insert(2, 77);
	lst.print();
	cout << lst[2] << endl;
	for (auto el : lst)
	{
		cout << el << " ";
	}
	cout << endl;
	for (auto it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	return 0;
}
