#include <stdio.h>


void fun1(){
	printf("fun1() function created\n");
}
void fun(){
	//This is second comment for fun function
	printf("this is fun function\n");
}
//comment added here 
int main(void){
	printf("Hello world!\n");
	fun();
	fun1();
	return 0;
}
