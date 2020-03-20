/*    name: jianxin,zhu
  Complier: Visual Studio 2019
      Time: 03/19/2020
 */
 
 #ifndef LIST_H
#define LIST_H

#include"LISTNODE.h"
#include <iostream>

template<typename LISTNODE>

class List
{
public:
	~List()
	{
		if (!isEmpty())
		{
			std::cout << "Destroying nodes....\n";
			ListNode<LISTNODE>* currentPtr{ firstPtr };
			ListNode<LISTNODE>* temPtr{ nullptr };

			while (currentPtr != nullptr)
			{
				temPtr = currentPtr;
				currentPtr = currentPtr->nextPtr;
				delete temPtr;
			}
		}
		std::cout << "All nodes destroyed\n\n";
	}
	void insertAtFront(const LISTNODE& value)
	{
		ListNode<LISTNODE>* newPtr{ getNewNode(value) };

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
	void insertAtBack(const LISTNODE& value)
	{
		ListNode<LISTNODE>* newPtr{ getNewNode(value) };
		if (isEmpty())
		{
			firstPtr = lastPtr = newPtr;
		}
		else
		{
			lastPtr->nextPtr = newPtr;
			lastPtr = newPtr;
		}
	}
	bool removeFromFront(LISTNODE& value)
	{
		if (isEmpty())
		{
			return false;
		}
		else
		{
			ListNode<LISTNODE>* temptr{ firstPtr };
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
	bool removeFromBack(LISTNODE& value)
	{
		if (isEmpty())
		{
			return false;
		}
		else
		{
			ListNode<LISTNODE>* temPtr{ lastPtr };
			if (firstPtr == lastPtr)
			{
				firstPtr = lastPtr = nullptr;
			}
			else
			{
				ListNode<LISTNODE>* currentPtr{ firstPtr };
				while (currentPtr->nextPtr != lastPtr)
				{
					currentPtr = currentPtr->nextPtr;
				}
				lastPtr = currentPtr;
				currentPtr->nextPtr = nullptr;
			}
			value = temPtr->data;
			delete temPtr;
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
			std::cout << "The List is empty" << std::endl;
			return;
		}
		ListNode<LISTNODE>* currentPtr{ firstPtr };
		std::cout << "The List is: ";
		while (currentPtr != nullptr)
		{
			std::cout << currentPtr->data << ' ';
			currentPtr = currentPtr->nextPtr;
		}
		std::cout << "\n\n";
	}
private:
	ListNode<LISTNODE>* firstPtr{ nullptr };
	ListNode<LISTNODE>* lastPtr{ nullptr };

	ListNode<LISTNODE>* getNewNode(const LISTNODE& value)
	{
		return new ListNode<LISTNODE>{ value };
	}
};
#endif 
