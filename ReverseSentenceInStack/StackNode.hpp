/*   name: jianxin.zhu
 Complier: Visual Studio 2019
     Time: 03/19/2020
     
*/


#ifndef STACKNODE_H
#define STACKNODE_H

template<typename STACKNODE> class Stack;

template<typename STACKNODE>
class StackNode {
	friend class Stack<STACKNODE>;

public:
	explicit StackNode(const STACKNODE& info)
		:data(info), nextPtr(nullptr)
	{

	}
	STACKNODE getData() const
	{
		return data;
	}
private:
	STACKNODE data;
	StackNode<STACKNODE>* nextPtr;
};
#endif
