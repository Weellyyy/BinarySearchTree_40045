#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = nullptr; //initializing ROOT to null
	}

	void insert(string element) //Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, nullptr, nullptr); //allocate memory for the new node
		newNode->info = element; //Assign value to the data field of the new data
		newNode->leftchild = nullptr; // Make the left child of the new node point to the null
		newNode->rightchild = nullptr; // Make the right child of the new node point to the null

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode); //Locate the node which be the parent of the node to be inserted

		if (parent == nullptr) // if the parent is NULL (tree is empty)
		{
			ROOT = newNode; // Mark the newnode as ROOT
			return;
		}

		if (element < parent->info) //if the value in the data field of the new node is less than that of the parent
		{
			parent->leftchild = newNode; //make the left child of the parent point to the new node
		}
		else if (element > parent->info); //if the value in the data field of the new data is greater than that of the parent
		{
			parent->rightchild = newNode; //make the right child of the parent point to the new node
		}
	}



};