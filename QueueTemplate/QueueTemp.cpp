#include "QueueTemp.h"

std::ostream &operator<<(std::ostream &strm, queuenode &obj)
{
	
	strm << obj.intgetter() << ' ' << obj.chargetter() << std::endl;
	return strm;
}

int main()
{
	queue <queuenode> queobj;

	queobj.enqueue(queuenode(5, 'A'));
	queobj.enqueue(queuenode(10, 'B'));
	queobj.enqueue(queuenode(15, 'C'));
	queobj.enqueue(queuenode(20, 'D'));
	queobj.enqueue(queuenode(25, 'E'));
	queobj.enqueue(queuenode(30, 'F'));
	queobj.display();
	queobj.dequeue();
	queobj.display();
}
