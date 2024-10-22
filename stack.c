#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int stack[MAX],top=-1;
void push(){
	int elem;
	if(top==MAX-1){
	printf("Stack Overflow!cannot push more elements\n");
	return;
}
printf("Enter the element to be pushed:\n");
scanf("%d",&elem);
top++;
stack[top]=elem;
printf("%d pushed to the stack.\n",elem);
}
void pop(){
	if(top==-1){
	printf("Stack Underflow!No element to pop.\n");
	return;
}
printf("poped element:%d\n",stack[top]);
top--;
}
void display(){
int i;

if(top==-1){
	printf("Stack is empty");
	return;
	}
	printf("Stack elements are:\n");
	for(i=top;i>=0;i--){
	printf("%d\n",stack[i]);
	}

}

int main(){
	int ch;
	while(1){
	printf("----Stack menu----\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.Display \n");
	printf("4.Exit \n");
	
	
	
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch){
	case 1:
	push();
	break;
	
	case 2:
	pop();
	break;
	
	case 3:
	display();
	break;
	
	case 4:
	exit(0);
	default:
	
	}
	}
	return 0;
	}
	
	


	

	