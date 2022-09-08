//q1) Write a c program to implement linked list and insert the element at the end //
#include <stdio.h>  
#include <stdlib.h>

struct node    
{  
        int data;  
        struct node *next;  
};        
struct node *head, *tail = NULL;


void addNode(int data) 
{                                                                      
struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
		newNode->data = data;  
        newNode->next = NULL;             
	if(head == NULL)   
    	{  
		head = newNode;       
        tail = newNode;  
    }  
	else 
	{  
            tail->next = newNode;  
            tail = newNode;  
	}  
}	

void addAtEnd(int data) 
{                             
	struct node *newNode = (struct node*)malloc(sizeof(struct node));  
	newNode->data = data;  
	newNode->next = NULL;  
                            
	if(head == NULL) 
	{  
			                 
		head = newNode;  
		tail = newNode;  
	}  
	else
	{  
		tail->next = newNode;  
                        
		tail = newNode;  
	}  
}    

int countNodes() 
{  
	int count = 0;  
	struct node *current = head;   //Node current will point to head  
	while(current != NULL) 
	{  
            count++;  
            current = current->next;  
	}  
	return count;  
}  

void display() 
{
    
	struct node *current = head;  
	if(head == NULL) 
	{  
		printf("List is empty\n");  
		return;  
	}  
		printf("Here is the list of element: \n");  
        while(current != NULL) 
        {  
            printf("%d ", current->data);  
            current = current->next;  
        }  
        printf("\n");  
}           
int main()  
{    
    addNode(4);  
	addNode(6);  
	addNode(7);  
	addNode(8);  
	addNode(9);    
	display();  
	printf("number of elements present in the list: %d\n", countNodes());
    printf("adding a element at the end \n");  

	addAtEnd(11);  
	display();        
	
	return 0;  
}  
