/*   name: jianxin zhu
  Complier: Visual Studio 2019
    Date: 04/01/2020
*/

#ifndef QUEUE_H
#define QUEUE_H

#include"LIST.h"
template<typename QUEUETYPE>
class Queue : private List<QUEUETYPE>
{
public:
	void enqueue(const QUEUETYPE& value)
	{
		this->insertAtBack(value);
	}
	bool dequeque(QUEUETYPE& value)
	{
		return this->removeFromFront(value);
	}
	bool isQueueEmpty() const
	{
		return this->isEmpty();
	}
	void printQueue() const
	{
		this->print();
	}
	int queueSize() const
	{
		return this->sizeQueue();
	}
	QUEUETYPE queueFront() const
	{
		return this->begin()->getData();
	}
};
#endif
