#include "BST.h"
#include<iostream>
#include<sys/time.h>
using namespace std;

int main(){

int num[3]= {100000,75000,50000};

BST tree1;  //inorder
BST tree2;  // random

cout<< "Inorder insertion"<<endl;

for(int t=0;t<3;t++){
//cout<<"Test for"<<num[t]<<"nodes"<<end;
//TEST-1
//int array[num[t]];

 struct timeval start, finish;
 gettimeofday(&start, NULL); 
 for(int i=0;i<num[t];i++){
 tree1.insert(i);
}
 gettimeofday(&finish, NULL);
 double totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
cout << "Total time: " << totalTime << " seconds" << endl;


for(int i=0;i<=num[t];i+=10000){
 gettimeofday(&start, NULL); 
 tree1.find(i);
 gettimeofday(&finish, NULL);
  totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 
 
 cout<<"Each find call on " << i << " nodes BST takes" <<totalTime<<"seconds"<<endl;
} 

/*TEST-2

 gettimeofday(&start, NULL);
 for(int i=0;i<num[t];i+=4){
 tree1.remove(i);
 }
 
 gettimeofday(&finish, NULL);
 totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 cout << "Total time: " << totalTime << " seconds" << endl;
 cout<<"removing 4 multiples on a" << num[t]<< "nodes  takes" <<totalTime<<"seconds"<<endl;

//TEST-3

 gettimeofday(&start, NULL);
 for(int i=0;i<num[t];i+=2){
 tree1.remove(i);
 }
 
 gettimeofday(&finish, NULL);
 totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 cout << "Total time: " << totalTime << " seconds" << endl;
 cout<<"removing 2 multiples  on a" << num[t]<< "nodes  takes" <<totalTime<<"seconds"<<endl;  */

//} 


cout<<"Random Order"<<endl;
for(int t=0;t<3;t++){

//TEST-1


 struct timeval start, finish;
 gettimeofday(&start, NULL); 
 for(int i=0;i<num[t];i++){
 tree2.insert(rand()%num[t]);
}
 gettimeofday(&finish, NULL);
 double totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
cout << "Total time: " << totalTime << " seconds" << endl;


for(int i=0;i<num[t];i+=10000){
 gettimeofday(&start, NULL); 
 tree2.find(i);
 gettimeofday(&finish, NULL);
  totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 
 
 cout<<"Each find call on " << i << " nodes BST takes" <<totalTime<<"seconds"<<endl;
 }  
}

/*TEST-2

 gettimeofday(&start, NULL);
 for(int i=0;i<num[t];i+=4){
 tree1.remove(i);
 }
 
 gettimeofday(&finish, NULL);
 totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 cout << "Total time: " << totalTime << " seconds" << endl;
 cout<<"removing 4 multiples on a" << num[t]<< "nodes  takes" <<totalTime<<"seconds"<<endl;

//TEST-3

 gettimeofday(&start, NULL);
 for(int i=0;i<num[t];i+=2){
 tree1.remove(i);
 }
 
 gettimeofday(&finish, NULL);
 totalTime = 
 (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
 (double)(finish.tv_usec - start.tv_usec)) / 
 (double)1000000;
 cout << "Total time: " << totalTime << " seconds" << endl;
 cout<<"removing 2 multiples  on a" << num[t]<< "nodes  takes" <<totalTime<<"seconds"<<endl;  

} */







/*BST tree;
tree.insert(9);
tree.insert(11);
tree.insert(10);
tree.insert(12);
tree.insert(6);
tree.insert(5);
tree.insert(7);
tree.insert(8); 

tree.print(); 

tree.remove(9);
cout<<""<<endl;
tree.print(); 

tree.remove(9);
cout<<""<< endl;
tree.print();  
cout <<endl;

tree.remove(tree.root,5);
cout<<""<< endl;
tree.print(); 

cout<< endl;
int y=tree.insert(9);
cout<<y<<endl;

int x=tree.find(4);
cout<<x<<endl; */

}
}
