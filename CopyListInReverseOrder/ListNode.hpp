/*    name: jianxin,zhu
  Complier: Visual Studio 2019
      Time: 03/19/2020
 */


#ifndef LISTNODE_H
#define LISTNODE_H

template<typename LISTNODE> class List;

template<typename LISTNODE>
class ListNode {
	friend class List<LISTNODE>;

public:
	explicit ListNode(const LISTNODE& info)
		:data(info), nextPtr(nullptr)
	{

	}
	LISTNODE getData() const
	{
		return data;
	}
private:
	LISTNODE data;
	ListNode<LISTNODE>* nextPtr;
};
#endif
