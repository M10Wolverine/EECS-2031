/***************************************
* EECS2031Z Lab6 *
* Filename: Lab6H3 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50
#define MAX_LEN 30

struct integers
{
  int int1;
  int int2;
};

struct node {  // list 'node' struct
   int data;
   struct node *next;
};


void init( );
void display();
int len();
int search(int);

void insert(int d );
void insertAfter(int key, int index);
void delete (int d);

struct node * head;   // global variable, the head of the linkedlist

int main()
{
    int i, key, index;

    struct integers arr[MAX_LEN]; // an array of ten structs

    char buffer[BUFFER_SIZE];
    int int1, int2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)  
    {
       sscanf(buffer, "%d %d", &int1, &int2);   // tokenize buffer and store into int1 and int2

       arr[count].int1 = int1;
       arr[count].int2 = int2;
       count++;
    }

    fclose(file);

    /* print the array of structures */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
    }
    printf("\n");

    // now building up the list by reading from the array of structures
    init();

    i=0;
    for(i; i< count; i++){
        int value=0;
        // read two ints from arr[i], sum up to variable value
        value+=arr[i].int1;
	value+=arr[i].int2;

        //no more coding in main
        printf("insert %d: (%d)", value, len());
        insert(value);
        display();
    }

    int removeList [] = {0,1,2,3,  5,6,7,8,9, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=removeList[i]) != -10000){
        
	printf("remove %d: (%d)", key, len());
        delete(key);
        display();
        i++;
    }

    // insert again
    int addList [] = {7,3,5,6,8,9, 2,0,1, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=addList[i]) != -10000){ 
        
	printf("insert %d: (%d)", key, len());
        insert(key);
        display();
        i++;
    }

    // insert after
    printf("\n");
    key =-4; index =2;
    printf("insert %d after index %d: (%d)\t", key,index,len());insertAfter(key,index); display(); 
    key =-6; index = 0;
    printf("insert %d after index %d: (%d)\t", key,index,len());insertAfter(key,index); display(); 
    key =-8; index = 6;
    printf("insert %d after index %d: (%d)\t", key,index,len());insertAfter(key,index); display(); 

    // search
    printf("\n");
    int searchList [] = {5,50,9,19,0,-4, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key = searchList[i++]) != -10000 ){
		 
        printf("search %3d ....  ", key);
        
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
    }

return 0;
}

/* Initialize the list. */
void init( )
{
    head = NULL;
}

/* Print the content of the list. */
void display()
{
    struct node *current = head;
    while (current != NULL){
        printf( "%4d", current->data );
        current = current -> next;
    }printf( "\n" );

}

/* return the length of the linked list */
int len()
{
	int l=0;
	struct node *curr;
	
	curr = head;
	while (curr != NULL)
	{
		l++;
		curr = curr -> next;
	}	
	return l;
}

int search (int key)
{
	struct node *curr;
	curr = head;
	while (curr != NULL)
	{
		if ((*curr).data == key)
		{
			return 1;
		}
		curr = (*curr).next;
	}
	return 0;
}



/* Insert a new data element with key d into the end of the list. */
/* Hint: You need to consider the special case that the list is empty, and the general case that the list is not empty */
void insert(int d)  //  at the end
{
   struct node *newNode;
   struct node *last;

   newNode = malloc(sizeof(struct node));
   newNode -> data = d;
   if (head == NULL){/* the list is empty */
	newNode -> next = head;
	head = newNode;
   }
   else
   {  // general case, insert at the end.
	last = head;
	while (last != NULL)
	{	
		//Checks if tail
		if ((*last).next == NULL)
		{	
			//Set last to point to new node
			last -> next = newNode;
			newNode -> next = NULL;
			return;
		}
		//Go to next node
		last = (*last).next;
	}
   }
}
 


/* insert in the middle. 
  assume the list is not empty */
void insertAfter(int d, int where )  //  insert at the middle
{
	struct node *newNode;
	struct node * prev;
	int i=0;

	prev = head;
	//Iterate until location to insert
	for (i; i<where; i++)
	{
		prev = (*prev).next;
	}
	//Insert new node
	newNode = malloc(sizeof(struct node));
	newNode -> data = d;
	newNode -> next = (*prev).next;
	prev -> next = newNode;
}

/* lab version */
/* Remove the node with value d from the list */
/* do not assume the list is not empty. if empty, give error message  */
/* assume no duplicated keys in the list */
/* assume the node to be deleted is in the list */
/* free the space */
void delete(int d)
{
   
   if (len() == 0){

       fprintf(stderr, "empty");  /* send to stderr, using fprintf(stderr, ...)  */
       return; //exit(0);
   }
   /* special case: to be removed is the first, need to change head  */
   if (head -> data == d){
        struct node * tmp = head;
        head = head -> next; // or head = NULL
        
        free(tmp);
    }

   else  // general case, remove from the middle or the last
    {
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;
        
        struct node * tmp = current -> next;
        current -> next = current->next->next;  /* by pass the node to be deleted */
        free(tmp);
    }
}
