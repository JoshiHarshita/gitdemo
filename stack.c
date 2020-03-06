#include<stdio.h>
#include<conio.h>  ///this is stack program
#define max 10
int a[max],top=0;
void push(int item) //dhfksdhfk
	{
		printf("\n\t\tSTACK OVERFLOW!!!!   Items cannot be inserted");
		return;
    }
    a[top]=item;
    top++;
}                             ////////in branch
int pop()
{	int del;
	if(top<0)         
	{
		printf("\n\t\tSTACK UNDERFLOW!!!!    No item to delete");
		return;
    }
	del=a[top];
	printf("---------->%d",del);//////////////////////////////////////////////////////deleted variable ki value store nhi ho rhi///////////////
	top--;
	return del;
}
void traverse()
{   int temp=top,i;
    while(temp<max)
		printf("\n");temp++;
	for(i=0;i<=top;i++)
	printf("%d\v",a[i]);
}
int main()
{   printf("\n\t\t\ttop=%d",top);
	int choice,item;
	char ch;
	printf("\n \t\t\t Implementation of stack: ");
	printf("\n 1:INSERT\n 2:DELETE\n 3:TRAVERSE\n 4:EXIT\n ");
	do
    {
	printf("\n Enter your choice:");
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n Enter number to be inserted:");
				scanf("%d",&item);
				push(item);
				printf("\n\t\t\ttop=%d",top);
				break;
			case 2:
				del=pop();
				printf("\n Deleted element is: %d",del);
				printf("\n\t\t\ttop=%d",top);
				break;
			case 3:
			    printf("\n\t\t\ttop=%d",top);
				traverse();
				break;
			case 4:
				exit(1);
			default:
				printf("\n Wrong choice!!!!");
		}
		printf("\n********** Press y to perform more operation else Press n**********");
		ch=getch();
	}while(ch=='y');
	return 0;
}
