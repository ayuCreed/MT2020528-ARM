//Ques 1 -- Assignment 2 
// Descending full stack
#include<stdio.h>
#include<conio.h>
  
   #define N 7	
	int stack[N];
	int sp= N;
 
void push(){
	int x;
	printf("Enter Data to push in the stack : ");
	scanf("%d",&x);
	
	if(sp==0){
		printf("Overflow occured \n");
	}
	else{
		sp=sp-1;
		stack[sp]=x;
	}	
}

void pop(){
	
	int item ;
	
        	if(sp==N){
	        	printf("Underflow occured \n");
	        }
	            else{
		            item=stack[sp];
		            sp=sp+1;
		            printf("Item to be popped is: %d\n",item);
	                }

}
                        void print(){
                        	int i;
	                            for(i=sp;i<=N-1;i++){
	                        	printf("%d ",stack[i]);
	                                                }
	                                printf("\n");
	                                printf("Position of Stack Pointer is : %d \n",sp);
}

void main(){
	int api_select;
	do{
	
	printf("Enter choice: 1 for PUSH , 2 for POP , 3 for DISPLAY , 0 for exit :");
	scanf("%d",&api_select);
	switch(api_select){
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: print();
				break;
		case 0: printf("Exit...");
				break;
		default: printf("Invalid Choice");
	          } 
	}while(api_select!=0);
		getch();	
}