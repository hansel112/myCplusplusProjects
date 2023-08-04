#include<iostream>
#include<stdlib.h>

using namespace std;

int array[10];
int top = -1;

void delay();
void push(int item);
int pop();
int peek();
bool isFull();
bool isEmpty();
int size();
void display();

void delay(int j){
	int i, k;
	for(i=0; i<j; i++)
		k = i;
}

int size(){
	int counter = 0;
	if(isEmpty()){
		return 0;
	}
	else{
	
	for(int i=0; i<=top; i++)
		counter++;
	return counter;
}	
}

void push(int item){
	if (!isFull()){
		top = top + 1;
		array[top] = item;
	}
	else{
		cout<<"\nThe stack is Overflown!!";
		exit(0);
	}
}

int pop(){
	if (!isEmpty()){
	int d = top;	
	top = top - 1;
	return array[d];}
	else{
		cout<<"\nThe stack Is Underflown!!";
		exit(0);
	}
	
	
}

int peek(){
	if (isEmpty()){
		cout<<"\nStack is Empty.";
	}
	else
	return array[top];
}

bool isEmpty(){
	if (top==-1){
		return true;
	}
	else{
		return false;
	}
}

bool isFull(){
	if (top==9){
		return true;
	}
	else{
		return false;
	}
}

void display(){
	int i, y;
	y = size();
	
	cout<<"\nThe Elements in our stack are: { ";
	for(int i=0; i<y; i++){
		cout<<array[i]<<", ";
	}
	cout<<"\b\b }";
}

int main(){
	int choice;
	
	main_menu:
	cout<<"\n\nWhat would you like to do to the current Stack?"	;
	cout<<endl<<"\t1. pop()";
	cout<<endl<<"\t2. peek()";
	cout<<endl<<"\t3. size()";
	cout<<endl<<"\t4. push()";
	cout<<endl<<"\t5. Display Stack.";
	cout<<endl<<"\t6. Clear Stack.";
	cout<<endl<<"\t7. Clear the screen.";  
	cout<<"\n\nEnter Choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:{
			if(!isEmpty()){
		int p = pop();
		cout<<"\n\nThe removed item is: "<<p<<endl;
		delay(1000000000);
		cout<<endl<<endl;
		goto main_menu;
		}
		else{
			cout<<"\nYou cannot pop an Empty Stack!!";
			delay(1000000000);
			cout<<endl<<endl;
			goto main_menu;
		}
			}break;
			
		
		
			
		
		case 2: {
		if(!isEmpty()){
		int s = peek();
		cout<<"\n\nThe top most element in our stack is: "<<s<<endl;
		delay(1000000000);
		cout<<endl<<endl;
		goto main_menu;
		}
		else{
			cout<<"\n\nYou cannot peek from an EMPTY STACK!!";
			delay(1000000000); 
			cout<<endl<<endl;
			goto main_menu;
		}
		}break;
		
		case 3:{
		int z = size();
		cout<<"\n\nThe Stack now has: "<<z<<" elements."<<endl;
		delay(1000000000);
		cout<<endl<<endl;
		goto main_menu;
		}break;
		
		case 4:{
		if(!isFull()){
			int amount, item;
			cout<<endl<<"\nHow many elements would you like to add to the stack: "; cin>>amount;
			for(int i=0; i<amount; i++){
				if (i<amount-1){
				cout<<endl<<"\nEnter item "<<i+1<<": "; cin>>item;
				push(item);
				cout<<"\nSuccessfully added "<<item<<" to the Stack.";}
				else{
				cout<<endl<<"\nEnter last item: "; cin>>item;
				push(item);
				cout<<"\nSuccessfully added "<<item<<" to the Stack. \nWait while Main menu loads.";	
				}
			}			
			delay(1000000000);
			cout<<endl<<endl;
			goto main_menu;
		}
		else{
			cout<<"\n\nSORRY, you cannot add any more. STACK is FULL!";
			delay(1000000000);
			cout<<endl<<endl;
			goto main_menu;
		}
				
		}break;
		
		case 5:
		if (isEmpty()){
			cout<<"\nThe Stack is Currently Empty!";
			delay(1000000000);
			cout<<endl<<endl;
			goto main_menu;
		}
		else{
			display();
			delay(1000000000);
			cout<<endl<<endl;
			goto main_menu;
		}
		break;
		
		case 6:{
		top=-1;
		cout<<"The Stack has been Emptied!!";
		delay(1000000000);
		goto main_menu;
		}break;
		
		case 7:
			system("cls");
			cout<<"Reloading Menu.";
			for(int i=0; i<10; i++){
				cout<<".";
				delay(100000000);
			}
			system("cls");
			goto main_menu;
			break;
			
		
		default:
		goto main_menu;
		break;
		
	}
	
	
}

