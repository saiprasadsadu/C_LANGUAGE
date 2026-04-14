
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
        }
        else{
                C->next=N;
                C=N;
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
STU * node_pop(STU *H)
{
	STU *N = H->next;
	free(H);
	return N;
}
STU * node_push(STU *H)
{
	STU *N; // inserting new node at head and return new head
	N=create_node();
	N->next = H;// linking previous linked to newly created node
	return N; // new node is head so returning new node as our Head now

}
int main()
{
    STU *H=NULL;int choice;// pointer to store the linked list ,first node address so that we can access other nodes ,with first node address
    while(1)
    {
        printf("make your choices for queue(First in First out) \n 1. create linked list \n 2. Traversal\n 3.push \n 4.pop\n 5. Terminate\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: H = create_linked_list();
                    break;
            case 3: H = node_push(H);
		    break;
	    case 2: Traversal(H);
		    break;
	    case 4: H = node_pop(H);
	    	    break;
	    case 5: return 0;
	}
	
    }
}
