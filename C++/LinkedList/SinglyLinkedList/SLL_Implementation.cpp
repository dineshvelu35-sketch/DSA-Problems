#include<bits/stdc++.h>
using namespace std;
class Node
{
	int data;
	Node* next;
	Node* head;
	public:
	Node()
	{
		head=nullptr;
	}
	Node(int val)
	{
		data=val;
		next=nullptr;
	}
	public:
	void InsertAtEnd(int val)
	{
		Node *newNode=new Node(val);
		if(head==nullptr)
		{
			head=newNode;
			head->next=newNode->next;
			return;
		}
		Node *temp=head;
		while(temp->next!=nullptr)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		
	}
	void InsertAtBegining(int val)
	{
		Node *newNode=new Node(val);
		if(head==nullptr)
		{
			head=newNode;
			return;
		}
		newNode->next=head;
		head=newNode;
	}
	 void InsertAtPosition(int val,int pos)
	{
		Node *newNode=new Node(val);
		if(head==nullptr)
		{
			cout<<"Empty"<<endl;
			return;
		}
		Node *temp=head;
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	void DeleteAtBegining()
	{
		if(head==nullptr)
		{
			cout<<"Empty"<<endl;
			return;
		}
		Node *temp=head;
		head=temp->next;
		delete(temp);
	}
	void DeleteAtEnd()
	{
		if(head==nullptr)
		{
			cout<<"Empty"<<endl;
			return;
		}
		Node* temp=head;
		while( temp->next->next!=nullptr)
		{
			temp=temp->next;
		}
		delete(temp->next);
		temp->next=nullptr;	
		
	}
	void DeleteAtPosition(int pos)
	{
		if(head==nullptr)
		{
			cout<<"Empty"<<endl;
			return;
		}
		Node *temp=head;
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		Node *del=temp->next;
		temp->next=del->next;
		delete(del);
	}
	void Display()
	{
		if(head==nullptr)
		{
			cout<<"Empty"<<endl;
			return;
		}
		Node *temp=head;
		while(temp->next)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<endl;
	}
	int CountNode()
	{
		int Cnt=0;
		Node *temp=head;
		while(temp->next)
		{
			Cnt++;
			temp=temp->next;
		}
		Cnt++;
		return Cnt;
	}
	bool IsEmpty()
	{
		return (head==nullptr);
	}
	void Search(int val)
	{
		
		if(head->data==val)
		{
			cout<<"Element Found"<<endl;
			return;
		}
		Node *temp=head;
		while(temp->next)
		{
			if(temp->data==val)
			{
				cout<<"Element Found"<<endl;
				return;
			}
			temp=temp->next;
		}
		cout<<"Element Not Found"<<endl;
	}
};
int main()
{
	Node List;
	List.InsertAtEnd(10);
	List.InsertAtEnd(20);
	List.InsertAtEnd(30);
	List.InsertAtEnd(40);
	List.InsertAtEnd(50);
	List.InsertAtEnd(60);
	List.Display();
	List.InsertAtBegining(11);
	List.InsertAtBegining(22);
	List.InsertAtBegining(33);
	List.InsertAtBegining(44);
	List.InsertAtBegining(55);
	List.InsertAtBegining(66);
	List.Display();
	List.InsertAtPosition(54,3);
	List.InsertAtPosition(67,8);
	List.Display();
	List.DeleteAtBegining();
	List.DeleteAtBegining();
	List.Display();
	List.DeleteAtEnd();
	List.DeleteAtEnd();
	List.Display();
	List.DeleteAtPosition(7);
	List.DeleteAtPosition(7);
	List.Display();
	cout<<List.CountNode()<<endl;
	cout<<List.IsEmpty()<<endl;
	List.Search(54);
	
	
}