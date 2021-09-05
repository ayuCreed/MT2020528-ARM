//Ques 6 -- Assignment 2 
// Implementing Circular Queue
#include<stdio.h>
#include<conio.h>

	#define N 7
	int queue[N];
	int first=-1;
	int last=-1;

void add_to_queue(){
	int x;
	printf("Enter Data to push in the stack : ");
	scanf("%d",&x);
	
	if(((last+1)%N)==first){
		printf("Overflow hs been occured \n");
	}
	else if(first==-1 && last==-1){
		first=0;
		last=0;
		queue[last]=x;
	}
	else{
		last=(last+1)%N;
		queue[last]=x;
	}	
}

void remove_from_queue(){
	
	int item ;
	
	if(first==-1 && last==-1){
		printf("Nothing is there to  be deleted \n");
	}
	else if(first==last){
		item=queue[first];
		first=-1;
		last=-1;
		printf("item to be Popped is: %d\n",item);
	}
	else{
		item=queue[first];
		first=(first+1)%N;
		printf("item to be Popped is: %d\n",item);
	}

}

void display(){
	
	if(first==-1 && last==-1){
		printf("Empty Queue is \n");
	}	    
    else{
    	int j,k;
    	if(last<first){
    			for(j=0;j<=last;j++){
				printf("%d ",queue[j]);
			}
			for(k=first;k<=N-1;k++){
				printf("%d ",queue[k]);
			}    			
		}		
		else{
			int i;
			for(i=first;i<=last;i++){
    			printf("%d ",queue[i]);
		}    
	}
	printf("\n");
}
}
void main(){
	int api_select;
	do{
	
	printf("Enter choice: 1 to ADD TO QUEUE , 2 for REMOVE FROM QUEUE , 3 for DISPLAY , 0 for exit :");
	scanf("%d",&api_select);
	switch(ch){
		case 1: add_to_queue();
				break;
		case 2: remove_from_queue();
				break;
		case 3: display();
				break;
		case 0: printf("Exit...");
				break;
		default: printf("Invalid Choice");
	} 
	}while(api_select!=0);
		getch();
}