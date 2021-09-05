//Ques 2 -- Assignment 2 
// Descending Empty stack
#include<stdio.h>
#include<conio.h>
	
	int stack[N];
	int sp= N-1;
    #define N 7
void push(){
	int x;
	printf("Enter Data to push in the stack : ");
	scanf("%d",&x);
	
	if(sp==-1){
		printf("Overflow occured \n");
	}
	else{
		stack[sp]=x;
		sp=sp-1;
		
	}
	
}

void pop(){
	
	int item ;
	
	if(sp==N-1){
		printf("Underflow has occured \n");
	}
	else{
		sp=sp+1;
		item=stack[sp];
		printf("Item to be popped is: %d\n",item);
	}

}
void display(){
	int i;
	for(i=sp+1;i<=N-1;i++){
		printf("%d ",stack[i]);
	}
	printf("\n");
	printf("Position of Stack Pointer : %d \n",sp);
}

void main(){
	int ch;

	do{
	
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