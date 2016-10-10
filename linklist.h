//linklist.h
#include<iostream>
using namespace std;
struct node
{
	node *next;
	int data;
}; 
class linklist
{
	public:
	  linklist(){};
	  linklist(int a[],int n)
	  {
		  if(n==1)head->next=NULL;
		  int i;
		  head=new node;
		  node *now=head;
		  for(i=0;i<n;i++)
		  {
			  now->data=a[i];
			  if(i<=n-2)
			  {
			
				  now->next=new node;
				  now=now->next;
		    }
		    else now->next=NULL;
    	}
    }
    void showlist()
    {
    	node *now=head;
    	while(now!=NULL)
    	{
    		cout<<now->data<<' ';
    		now=now->next;
		}
		cout<<endl;
	}
	node *head;	
};
