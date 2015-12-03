#include <iostream>



template <class Tnode> class Queuenodetemp
{
	template <class Tnode> friend class queue;
private:
	Tnode value;
	Queuenodetemp <Tnode> *next;
public:
	Queuenodetemp() {}
	Queuenodetemp(Tnode v)
	{
		value = v;
		next = NULL;
	}

};
template <class Tnode> class queue
{
private :
	Queuenodetemp <Tnode> *head;
public:
	queue()
	{
		head = NULL;
	}
 void  enqueue(Tnode v)
	{
		Queuenodetemp <Tnode> * newnode = new Queuenodetemp<Tnode>(v);
		Queuenodetemp <Tnode> * nodeptr = head;
		while (head != NULL && nodeptr->next)
		{
			nodeptr = nodeptr->next;
		}
		if (head == NULL)
			head = newnode;
		else
			nodeptr->next = newnode;
	}
 void dequeue()
	{
		Queuenodetemp <Tnode> * nodetemp = NULL;
		nodetemp = head->next;
		delete head;
		head = nodetemp;
	}
 void display()
	{
		Queuenodetemp <Tnode> *nodeptr = head;
		while (nodeptr->next)
		{
			std::cout << nodeptr->value;
			nodeptr = nodeptr->next;
		}
		std::cin.get();
	}
};
class queuenode
{
private:
	int intval;
	char charval;
public:
	int intgetter()
	{
		return intval;
	}
	char chargetter()
	{
		return charval;
	}
	queuenode() {}
	queuenode(int intparam, char charparam)
	{
		intval = intparam;
		charval = charparam;
	}
};

