#include <stdio.h>

int main(void) {
	// your code goes here
	int a[] = {71, 14, 33, 27, 54, 10, 35, 19, 42, 44};
	int length = sizeof(a)/sizeof(int);
	int num = 44;
	int i=0, flag=0;
	for(i=0; i<length; i++){
	    if(a[i] == num){
	        printf("The number %d is at position: %d\n",num,i+1);
	        flag++;
	        break;
	    }
	}
	if(flag==0){
	    printf("The number is not on the list");
	}
	
	return 0;
}

