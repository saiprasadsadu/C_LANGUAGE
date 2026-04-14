
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int id;
    char name[20];
    struct student *next;  // in linked list to store next node address we have created a self referrential strucuture
}STU;

STU * create_node()
{
    STU *N= malloc(sizeof(STU));
    printf("read members of node:");
    scanf("%d %s", &N->id,N->name);
    return N;
}
STU * create_linked_list()
{
    char ch;
    STU *H=NULL,*N =NULL,*C=NULL;//c current node
    while(1)
    {
        printf("create new node y(yes)/n(no)");
        scanf(" %c",&ch);
        if(ch=='y')
        N= create_node();
        else
            break;
        if(H==NULL)
        {
            H=N;
            C=N;
            C->next = NULL;
        }
        else{
                C->next=N;
                C=N;
                C->next = NULL;
        }

    };
    return H;
    
}
void Traversal(STU *H)
{
    STU *T=H;
    printf("Travesal\n");
    while(T!=NULL)
    {
        printf("%d %s\n",T->id,T->name);
        T=T->next;
    }
}
STU * node_insertion(STU * H)
{
	STU *N = create_node();
	STU *T=H;// traversal to the position where we need to place
	int pos,i=0;
	printf("enter a position to insert node:");
	scanf("%d",&pos);
	while(i<pos-1&& T->next!=NULL)
	{
		T=T->next;// moves to next node
		i++;
	}
	//insertion after a position
	if(pos == 0)
	{
		N->next = H;
		 H = N;
		 return H;
		
	}
	N->next=T->next;// firstly connecting the new node with its right node and then with its left node
	T->next=N;
	return H;

}
STU * node_deletion(STU *H)
{
	STU *prev=NULL, *C=H;// previous node ,current node
	int pos,i=0;
	printf("enter a position to delete a node:");
	scanf("%d",&pos);
	while(i<pos-1 && C->next!=NULL)
	{
		prev = C;
		C= C->next;
		i++;
	}
	if(pos==0)
	{
		H = C->next;// before deleting head node taking next node as Head and returning its address
		free(C);     // delete head node 
		return H;
	}	
	prev->next=C->next;
	free(C);
	return H;
}
int main()
{
    STU *H=NULL;int choice;// pointer to store the linked list ,first node address so that we can access other nodes ,with first node address
    while(1)
    {
        printf("make your choices\n 1. create linked list \n 2. Traversal\n 3.insertion\n 4.deletion\n 5. Terminate\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: H = create_linked_list();
                    break;
            case 3: H =node_insertion(H);
		    break;
	    case 2: Traversal(H);
		    break;
	    case 4: node_deletion(H);
	    	    break;
	    case 5: return 0;
            
        }
    }
}
   
