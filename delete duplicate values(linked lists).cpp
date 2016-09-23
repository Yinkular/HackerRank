#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:        
	 Node* removeDuplicates(Node *head)
          {
            //Write your code here
              if(head == NULL)
                  {
                  return 0;
              }
              
              int array_frequency[1000] = {0};
              Node * current_node;
              current_node = head;
              
              while(current_node != NULL)
                  {
                  if(array_frequency[current_node->data]==0)
                      {
                      array_frequency[current_node->data]++;
                  }
                  
                  else
                      {
                      Node * check_node, *start;
                      start = head;
                      check_node = current_node;
                      
                      while(start->next != check_node)
                          {
                            start = start->next;   
                      }
                      
                      start-> next = check_node->next;
                      check_node = 0;
                  }
                  
                  current_node = current_node->next;
              }
              return head;
          }
		  
		   Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}