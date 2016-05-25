#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[] = {14, 27, 33, 35, 10};
	int i=0;
	int size = 0, temp=0, length =  0;
	
	size = sizeof(arr)/sizeof(int);
	
	length = size;
	
	while(length--){
	    
	    for(i=0 ; i<size ; i++){
	       
	       if(i+1<size){
	       
	        if(arr[i]>arr[i+1]){
	            temp = arr[i];
	            arr[i] = arr[i+1];
	            arr[i+1] = temp;
	        }
	       }
	    }//inner for
	}//outer while
	
	for(i=0; i<size; i++){
	    printf("%d\n", arr[i]);
	}
	return 0;
}

