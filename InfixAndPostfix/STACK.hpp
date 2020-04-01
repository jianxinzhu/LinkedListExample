/*     name: jianxin zhu
    Compiler: Visual studio 2019
    date: 03/31/2020
 */
 
 #ifndef STACK_H
#define STACK_H

#include"LIST.h"

template<typename STACKNODE>

class Stack : private List<STACKNODE>
{
public:
	void push(const STACKNODE& data)
	{
		this->insertAtFront(data);
	}
	bool pop(STACKNODE data)
	{
		return this->removeFromFront(data);
	}
	bool stackIsEmpty()
	{
		return this->isEmpty();
	}

	void stackPrint() const
	{
		this->print();
	}

	STACKNODE stackTop() const
	{
		return this->begin()->getData();
	}
};
#endif
