   /*   Name: jianxin zhu
      Complier: Visual Studio 2019
         date: 03/31/2020
     */
     
     
#ifndef LIST_H
#define LIST_H

#include"LISTNODE.h"

#include<iostream>

template<typename NODETYPE>
class List
{
public:
	List();
	~List();
	void insertAtFront(const NODETYPE&);
	bool removeFromFront(NODETYPE&);
	bool isEmpty() const
	{
		return firstPtr == 0;
	}
	void print() const
	{
		if (isEmpty())
		{
			std::cout << "The Stack is Empty." << std::endl;
		}
		ListNode<NODETYPE>* currentPtr = firstPtr;

		while (currentPtr != nullptr)
		{
			std::cout << currentPtr->getData() << ' ';
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
private:
	ListNode<NODETYPE>* firstPtr;
	ListNode<NODETYPE>* lastPtr;
	
	ListNode<NODETYPE>* getNewNode(const NODETYPE& value)
	{
		return new ListNode<NODETYPE>(value);
	}
};
template<typename NODETYPE>
List<NODETYPE>::List()
	:firstPtr(nullptr), lastPtr(nullptr)
{

}
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
void List<NODETYPE>::insertAtFront(const NODETYPE& data)
{
	ListNode<NODETYPE> *newPtr = getNewNode(data);

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
template<typename NODETYPE>
bool List<NODETYPE>::removeFromFront( NODETYPE& value)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		ListNode<NODETYPE>* tmpPtr = firstPtr;
		if (firstPtr == lastPtr)
		{
			firstPtr = lastPtr = nullptr;
		}
		else
		{
			firstPtr = firstPtr->nextPtr;
		}

		value = tmpPtr->data;
		delete tmpPtr;
		return true;
	}
}
#endif
