//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
//#include<stdio.h>

/* A Linked list node */
struct Node {
	int burst_time;
	int arrival_time;
	int priority;
	int wt;
	struct Node* next;
};

int getCount(Node* head) 
{ 
    int count = 0; // Initialize count 
    Node* current = head; // Initialize current 
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 

int firstcome_firstserve(struct Node *head, int n, int waitingTime){
	 
	
	int total_waiting_time = 0, average_waiting_time;
	
	Node* temp = head;
	cout<<"\nScheduling Method: First Come First Served"
	      "\n   Process Waiting Times:";
	      
	  //Calculating waiting time     
	for(int y = 0; y < n; y++){
	     cout<<"\n\tP"<<y+1<<": "<<waitingTime<<" ms";
	     waitingTime +=  temp->burst_time;
	     total_waiting_time += waitingTime;
	     temp = temp->next;
	     //total_waiting_time += waitingTime;
	     
     };
     
     
     //Calculating average waiting time
     average_waiting_time =  (double)(1.0*total_waiting_time)/(double) (1.0 * n) ;
     
      return average_waiting_time;
};
// function to find the sum of
// nodes of the given linked list
int sjf_none(struct Node* head, int n,int waitingTime)
{
	struct Node* ptr = head;
	int sum = 0;
	struct Node* *h;
	//int waitingTime = 0;;
	 Node* cur1 = head;
     Node* cur2 = head;
     int total_waiting_time = 0, average_waiting_time;
     
     	cout<<"\nScheduling Method: Shortest Job First(None)"
	       "\n Process Waiting Times: ";
	 //bubble sort
	
