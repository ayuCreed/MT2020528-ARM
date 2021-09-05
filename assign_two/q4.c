//Ques 4 -- Assignment 2 
// Descending Empty stack
#include<stdio.h>
#include<conio.h>

	#define N 7
	int stack[N];
	int sp= 0;

void push(){
	int x;
	printf("Enter Data to push in the stack : ");
	scanf("%d",&x);
	
	if(sp==N){
		printf("Overflow hs been occured \n");
	}
	else{
		stack[sp]=x;
		sp=sp+1;
	}	
}

void pop(){
	
	int item ;
	
	if(sp==0){
		printf("Underflow has occured \n");
	}
	else{
		sp=sp-1;
		item=stack[sp];
		printf("Item to be Popped is: %d\n",item);
	}
}

void display(){
	int i;
	for(i=(sp-1);i>=0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
	printf("Position of Stack Pointer : %d \n",sp);
}

void main(){
	int ch;
]	do{
	printf("Enter choice: 1 for PUSH , 2 for POP , 3 for DISPLAY , 0 for exit :");
	scanf("%d",&ch);
	switch(ch){
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 0: printf("Good Bye...");
				break;
		default: printf("Invalid Choice");
	} 
	}while(ch!=0);
		getch();
}