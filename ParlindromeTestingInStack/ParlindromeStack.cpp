/*  name: jianxin zhu
Complier: Visual Studio 2019
   Date: 03/21/2020
 */
 
 
 #include<iostream>
#include<stack>
#include<string>

using namespace std;


int main()
{
	stack<char>stackList;
	string first, second;

	cout << "Enter a sentence: " << endl;
	getline(cin, first);

	for (char& c : first)
	{
		if (isspace(c) || ispunct(c))
		{
			continue;
		}
		stackList.push(tolower(c));
	}

	while (!stackList.empty())
	{
		second += stackList.top();
		stackList.pop();
	}

	cout << first << " is" << ((first == second) ? " " : " not ") << "a palindrome" << endl;


}
