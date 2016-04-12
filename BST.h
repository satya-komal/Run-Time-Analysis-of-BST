#ifndef BST_h
#define BST_h
#include<iostream>

using namespace std;

class BST{
 
private:

public:

struct BSTNode{
	int data;
	BSTNode*left=NULL;
	BSTNode*right=NULL;
        };

BSTNode*root;

//int getSuccessor(BSTNode *node);



int find(int val);
int insert(int val);
int remove(int val);
int deletenode(BSTNode *root,BSTNode* parent,bool p_left, int val);
BST();
void show(BSTNode*node);
void print();
int addnode(BSTNode*node,int val);
int findnode(BSTNode*node,int val);
//int deletenode(BSTNode*node,BSTNode*parent,int val);
};

#endif
