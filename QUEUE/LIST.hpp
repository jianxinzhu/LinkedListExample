/*   name: jianxin zhu
  Complier: Visual Studio 2019
    Date: 04/01/2020
*/

#ifndef LIST_H
#define LIST_H

#include"LISTNODE.h"
#include<iostream>

template<typename NODETYPE>
class List
{
public:
	~List();
	void insertAtBack(const NODETYPE&);
	bool removeFromFront(NODETYPE&);
	bool isEmpty() const
	{
		return firstPtr == nullptr;
	}
	void print() const
	{
		if (isEmpty())
		{
			std::cout << "The Queue is Empty." << std::endl;
			return;
		}
		ListNode<NODETYPE>* currentPtr = firstPtr;
		std::cout << "The Queue is: ";

		while (currentPtr != nullptr)
		{
			std::cout << currentPtr->data << ' ';
			currentPtr = currentPtr->nextPtr;
		}
	}
	ListNode<NODETYPE>* begin() const
	{
		return firstPtr;
	}
	ListNode<NODETYPE>* end() const
	{
		return lastPtr;
	}
	int sizeQueue() const
	{
		return size;
	}

private:
	ListNode<NODETYPE>* firstPtr = nullptr;
	ListNode<NODETYPE>* lastPtr = nullptr;
	int size = 0;

	ListNode<NODETYPE>* getNewNode(const NODETYPE& value)
	{
		return new ListNode<NODETYPE>{ value };
	}

};
template<typename NODETYPE>
List<NODETYPE>::~List()
{
	if (!isEmpty())
	{
		ListNode<NODETYPE>* currentPtr = firstPtr;

		while (currentPtr != nullptr)
		{
			ListNode<NODETYPE>* tmpPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tmpPtr;
		}
	}
}

template<typename NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE& value)
{
	ListNode<NODETYPE>* newPtr{ getNewNode(value) };

	if (isEmpty())
	{
		firstPtr = lastPtr = newPtr;
	}
	else
	{
		lastPtr->nextPtr = newPtr;
		lastPtr = newPtr;
	}

	size++;
}
template<typename NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE& value)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		ListNode<NODETYPE>* currentPtr = firstPtr;

		if (firstPtr == lastPtr)
		{
			firstPtr = lastPtr = nullptr;
		}
		else
		{
			firstPtr = firstPtr->nextPtr;
		}
		value = currentPtr->data;
		delete currentPtr;
		return true;
	}
	size--;
}

#endif
