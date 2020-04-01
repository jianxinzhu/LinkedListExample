/*   Name: jianxin.zhu
  compier: Visual Studio 2019
     date: 03/31/2020
 */
 
 
#ifndef LISTNODE_H
#define LISTNODE_H

template<typename NODETYPE>
class List;

template<typename NODETYPE>
class ListNode
{
	friend class List<NODETYPE>;

public:
	explicit ListNode(const NODETYPE& info)
		:data(info), nextPtr(nullptr)
	{

    }

	NODETYPE getData() const
	{
		return data;
	}
	ListNode<NODETYPE>* next() const
	{
		return nextPtr;
	}
private:
	NODETYPE data;
	ListNode<NODETYPE>* nextPtr;
};
#endif
