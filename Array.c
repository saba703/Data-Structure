#include <stdio.h>
#include <stdlib.h>
int a[30];

int n;
void create()
{
	printf("Enter the limit");
	scanf("%d",&n);
	printf("Enter the element of array");
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
}
void insert(){
int l,num;
printf("Enter the location to insert");
	scanf("%d",&l);
printf("Enter the number");
	scanf("%d",&num);
if(l<0||l>n){
	printf("invalid location");
	}
	else{
	for(int i=n-1;i>=l;i--){
		a[i+1]=a[i];
	}

	a[l]=num;
	n++;
	printf("/n new number inserted");
	}
	
}
void delete(){
	if(n==0){
		printf("Array is empty");
	}
	else{
		int l;
		printf("Enter the location to delete");
		scanf("%d",&l);
		if(l<0||l>n){
			printf("\n Invalid location");
		}
		else{
		for(int i=l;i<n;i++){
		a[i]=a[i+1];
		}
		n--;
		printf("Deleted Element");
		}
	}
}
void display(){
	if(n==0){
		printf("Array empty");
		}
	else{
		printf("The Array is");
		for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
		}
	}
}

void main(){
int c;
create();
while(1){
	printf("1.insert\n");
	printf("2.delete\n");
	printf("3.Display \n");
	printf("4.Exit \n");
	
printf("Enter your choice");
	scanf("%d",&c);
	switch(c){
	case 1:
	insert();
	break;
	
	case 2:
	delete();
	break;
	
	case 3:
	display();
	break;
	
	case 4:
	exit(0);
	default:printf("Invalid choice");
	
	}
	}
	
	}


