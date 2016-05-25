#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[] = {14, 33, 27, 10, 35, 19, 42, 44};
	int i=0, j=0;
	int size = 0, temp=0, length =  0;
	
	size = sizeof(arr)/sizeof(int);
	
	length = size;
	
	for(i=0 ; i<size ; i++){
	    
	    for(j=0 ; j<=i ; j++){
	       
	       if(j+1<size){
	       
	        if(arr[j]>arr[j+1]){
	            temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
	            break;
	        }
	       }
	    }//inner for
	}//outer while
	
	for(i=0; i<size; i++){
	    printf("%d\n", arr[i]);
	}
	return 0;
}

