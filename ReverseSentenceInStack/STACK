/*   name: jianxin.zhu
 Complier: Visual Studio 2019
     Time: 03/19/2020
     
*/


#ifndef STACK_H
#define STACK_H

#include"STACKNODE.h"
#include <iostream>

template<typename STACKNODE>

class Stack
{
public:
	~Stack()
	{
		if (!isEmpty())
		{
			std::cout << "Destroying nodes....\n";
			StackNode<STACKNODE>* currentPtr{ firstPtr };
			StackNode<STACKNODE>* temPtr{ nullptr };

			while (currentPtr != nullptr)
			{
				temPtr = currentPtr;
				currentPtr = currentPtr->nextPtr;
				delete temPtr;
			}
		}
		std::cout << "All nodes destroyed\n\n";
	}
	void push(const STACKNODE& value)
	{
		StackNode<STACKNODE>* newPtr{ getNewNode(value) };

		if (isEmpty())
		{
			firstPtr = lastPtr = newPtr;
		}
		else
		{
			newPtr->nextPtr = firstPtr;
			firstPtr = newPtr;
		}
	}

	bool pop(STACKNODE& value)
	{
		if (isEmpty())
		{
			return false;
		}
		else
		{
			StackNode<STACKNODE>* temptr{ firstPtr };
			if (firstPtr == lastPtr)
			{
				firstPtr = lastPtr = nullptr;
			}
			else
			{
				firstPtr = firstPtr->nextPtr;
			}
			value = temptr->data;
			delete temptr;
			return true;
		}
	}
	
	bool isEmpty() const
	{
		return firstPtr == nullptr;
	}
	void print() const
	{
		if (isEmpty())
		{
			std::cout << "The stack is empty" << std::endl;
			return;
		}
		StackNode<STACKNODE>* currentPtr{ firstPtr };
		std::cout << "The List is: ";
		while (currentPtr != nullptr)
		{
			std::cout << currentPtr->data;
			currentPtr = currentPtr->nextPtr;
		}
		std::cout << "\n\n";
	}
private:
	StackNode<STACKNODE>* firstPtr{ nullptr };
	StackNode<STACKNODE>* lastPtr{ nullptr };

 StackNode<STACKNODE>* getNewNode(const STACKNODE& value)
	{
		return new  StackNode<STACKNODE>{ value };
	}
};
#endif 
