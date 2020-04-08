#ifndef Node_H
#define Node_H
#include <iostream>
using namespace std;

class Node
{
public:
	int state;
	int action;
	Node* parent;
	int cost;

	Node();
	Node(Node&);
	
};
#endif