#include<stdlib.h>
#include<stdio.h>
typedef struct student
{
        int id;
        char name[10];
        struct student *next;
}STU;

void Traversal(STU *H)
{
        while(H!=NULL)
        {
                printf("%d %s\n",H->id,H->name);
                H=H->next;
        }
}

STU *create_node()
{
        STU *N = malloc(sizeof(STU));
        printf("enter members of a node:\n");
        scanf("%d %s",&N->id,N->name);
        N->next = NULL;
        return N;

}
STU *create_linked_list()
{
        char ch;STU *H=NULL,*N=NULL,*C =NULL;
        while(1)
	{
                printf("create a node enter (y)yes or (n)no:");
                scanf(" %c",&ch);
		if(ch == 'y')
                	N=create_node();
		if(ch =='n')
			return H;
		if(H == NULL)
                {
                        H =N;
                        C =H;
                }
                else
                {
                        C->next= N;
                        C=N;
                }
        }


}
int main()
{
        STU *H=NULL;
        H=create_linked_list();
        Traversal(H);

}

