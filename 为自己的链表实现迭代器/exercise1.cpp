// exercise1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<numeric>
#include"chain.h"

int main()
{
	chain<int> y;
	y.insert(0, 2);
	y.insert(0, 1);
	y.insert(2, 3);
	y.insert(3, 5);
	y.insert(3, 4);
	y.insert(5, 6);
	cout << y << endl;
	y.erase(3);
	cout << y.empty() << " size = " << y.size() << endl;
	cout << y.get(2) << endl;
	cout << y.indexOf(1) << endl;
	y.insert(3, 4);
	cout << y << endl;
	//chain<int>::iterator x;
	for (chain<int>::iterator i = y.begin(); i != y.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	for (chain<int>::iterator i = y.begin(); i != y.end(); ++i)
	{
		cout << *i << " ";
		*i += 1;
	}
	cout << "\n"<<y << " " << endl;
	
	//int sum = accumulate(y.begin(), y.end(), 0);
	//cout << "the sum = " << sum << endl;
	cin.get();
	cin.get();
    return 0; 
}

