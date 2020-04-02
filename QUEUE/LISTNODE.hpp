/*   name: jianxin zhu
  Complier: Visual Studio 2019
    Date: 04/01/2020
*/

#ifndef LISTNODE_H
#define LISTNODE_H

template<typename NODETYPE> class List;

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
private:
	NODETYPE data;
	ListNode<NODETYPE>* nextPtr;
};
#endif
