#include "BST.h"
using namespace std;

BST::BST(){
    root=NULL;	 
}

void BST::show(BSTNode*node){
if(node!=NULL){ 
show(node->left);
cout<<" "<<node->data;
show(node->right);
 }
} 

void BST:: print(){
 show(root);
}

/*BSTNode::BSTNode(){
        int data ='\0';
	BSTNode*left=NULL;
	BSTNode*right=NULL;
}

BSTNode::~BSTNode(){
}  */

int BST::find(int val){
   if(root==NULL)
   return 0;    
   else return findnode(root, val);
}

int BST:: findnode(BSTNode*node, int val){
  if(node==NULL) return 0;
  if(val==node->data)
  return val;
  
  else if(val<node->data){
      if(left==NULL) return 0;  
      else{
          return findnode(node->left,val);
       }
    }
  
  else if (val> node->data){
      if(right ==NULL) return 0;  
      else{
          return findnode(node->right,val);
     }
  }
}



int BST::insert(int val){
  if(root==NULL) {
     root= new BSTNode;
     root->data = val;
     return val;
               } 		 
  else {
        return addnode(root,val);
       } 
    }
    
int BST:: addnode(BSTNode*node,int val){
   if(val== node->data)
   return 0;
   	else if(val< node->data){
            if (node->left==NULL){
              node->left= new BSTNode;
              node->left->data =val;
              return val;   
           }
           else {
             return addnode(node->left,val);
           }
       }
      
       else if (val>node->data){
            if(node->right==NULL){
               node->right=new BSTNode;
               node->right->data= val;
               return val;
            }
           else{
              return addnode(node->right,val);
           }
       }	
 }

//Test remove
 int BST::remove(int val){
  if(root == NULL) return 0;
     
  return deletenode(root,NULL,true,val);  
 }

 int BST::deletenode(BSTNode *root,BSTNode* parent,bool p_left,int val){
     
     
     if(root->data==val)
     {
      if(root->left==NULL && root->right==NULL){
         if (p_left) parent->left =NULL;
         else parent->right=NULL;
         delete root;
         return 1;
     }
       
    
       else if(root->left == NULL)
       {
         if(p_left){
         parent->left = root->right;
         delete root;
         }
         else{
         parent->right=root->right;
         delete root;
         }
       return 1;
       }
       
       else if(root->right == NULL)
       {
       if(p_left){
         parent->left = root->left;
         delete root;
         }
         else{
         parent->right=root->left;
         delete root;
         }
       return 1;
        }
       
       else
       {
        
      
      BSTNode*pre; 
      BSTNode*tmp;
      tmp=root;
      pre=root->left;
      while(pre->right!=NULL){
      tmp=pre;
      pre=pre->right;
      }
      
      
      if(tmp!=root) {                     
      tmp->right=pre->left;                           
      pre->left=root->left; 
      }
      
      pre->right=root->right;
      if(parent==NULL) this->root =pre;                //deleting a root node with two children
      else {
      if(!p_left) parent->right=pre;
      else parent->left=pre;
      }
      
      delete root;
     
      }
     }
     else if(root->data>val)
     {
        deletenode(root->left,root,true, val);
     }
     else if(root->data<val)
     {
        deletenode(root->right,root,false, val);
     }

     return 0;
   } 

	  

	  
	  




