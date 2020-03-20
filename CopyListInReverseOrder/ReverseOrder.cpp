/*   name: jianxin.zhu
 Complier: Visual Studio 2019
     Time: 03/19/2020
 */




#include"LIST.h"
#include<iostream>
using std::cout;

template<typename T>
void reverseList(List<T> &first, List<T> &second)
{
	List<T> temp(second);
	T value;

	while (!temp.isEmpty())
	{
		temp.removeFromFront(value);
		first.insertAtFront(value);
	}
}

int main()
{
	List<char>List1, List2;

	for (char i = 'a'; i <= 'k'; i++)
	{
		List1.insertAtBack(i);
	}
	List1.print();

	reverseList(List2, List1);
	cout << "\nAfter reversing:  ";
	List2.print();

	return 0;
}
