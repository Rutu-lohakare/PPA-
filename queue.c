// Program to reverse the order of the first k elements of the Queue

#include <stdio.h>
#include <stdlib.h>
 
#define MAX 20

void insert(int [],int);
int delete();
void display1(int []);
int queue[MAX];
int queue1[MAX];

int rear = - 1;
int front = - 1;

int n,i,j,a,l,item,ele,element;

int STACK[MAX],top;
void push(int [],int);
int pop (int []);
 
void push(int stack[],int item)
{
    if(top==MAX-1)
    {
        printf("\nStack is full\n");
      
    }
    top++;
    stack[top]=item;
}
int pop(int stack[])
{
    int deleted;
    if(top==-1)
    {
        printf("Stack is Empty.\n");
       
    }
    else
    {
	    deleted=stack[top];
    	    top--;
    	    return deleted;
    }
}
void insert(int queue[],int item)
{
	if (rear == MAX - 1)
		printf("Queue Overflow \n");
	else
	{
		if (front == - 1)
		front = 0;
		rear = rear + 1;
		queue[rear] = item;
	}
}
int  delete()
{
    int a;
    if((front==0)&&(rear==-1))
    {
        printf("Queue is underflow\n");
    }
    a=queue[front++];
    return a;
    if(front>rear)
    {
        front=0;
        rear=-1;
    }
}
void display1(int queue[])
{
    int i;
    if (front == - 1)
    	printf("Queue is empty \n");
    else
    {
        for (i = front; i <= rear; i++)
	printf("%d ", queue[i]);
	printf("\n");
    }
}

void main()
{
	int k;
	printf("\nhow many elements in queue");
	scanf("%d",&n);
	printf("\nenter elements\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		insert(queue,a);
	}
        printf("\n original queue is\t");
	display1(queue);
        
	printf("\n enter k to reverse element in queue\t");
	scanf("%d",&k);
	
	for(i=0;i<k;i++)
	{
		j=delete();
		push(STACK,j);
	}
	for(l=0;l<k;l++)
	{
		ele=pop(STACK);
		insert(queue1,ele);
	}
	for(i=k;i<n;i++)
	{
		element=delete(queue);
		insert(queue1,element);
	}
	printf("\n queue after reverse element upto k\t");
	display1(queue1);

	
}

