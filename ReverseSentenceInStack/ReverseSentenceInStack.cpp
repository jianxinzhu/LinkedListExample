/*   name: jianxin.zhu
 Complier: Visual Studio 2019
     Time: 03/19/2020
     
*/


#include<iostream>
#include<string>
#include "STACK.h"

using namespace std;


int main()
{
	Stack<char>stack1;
	string sentence;
	cout << "Enter a senstence: ";
	getline(cin, sentence);

	cout << "The senstence you enter: " << sentence << endl;

	for (auto& s : sentence)
	{
		stack1.push(s);
	}
	cout << "After reverse the senstence: ";
	stack1.print();

}
