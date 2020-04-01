/*  name: jianxin zhu
Complier: Visual Studio 2019
   Date: 03/21/2020
 */
 
 
#include"STACK.h"

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string firstSentence, secondSentence;

	Stack<char>sentenceList;

	cout << "Enter a senstence for palidrome test: ";
	getline(cin, firstSentence);

	for (char& c : firstSentence)
	{
		sentenceList.push(c);
	}

	char charValue;
	while (!sentenceList.stackIsEmpty())
	{
		secondSentence += sentenceList.stackTop();
		sentenceList.pop(charValue);
	}

	cout << firstSentence << endl;
	cout << secondSentence << endl;

	cout << "The sentence is " << ((firstSentence == secondSentence) ? " Palidrome." : "not Palidrome.") << endl;
}
