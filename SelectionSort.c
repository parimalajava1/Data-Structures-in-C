#include <stdio.h>

int main(void) {
	// arranging in ascending order
	int i=0, j=0, small =0, position=0, length=0, temp=0;
	int arr[]={14, 33, 27, 10, 35, 19, 42, 44};
	length = sizeof(arr)/sizeof(int);
	
	for(i=0 ; i<length ; i++){
	    small = arr[i];
	    for(j=i ; j<length ; j++){
	        if(small>arr[j]){
	            small = arr[j];
	            position = j;
	        }//if
	    }//inner for
	    if(small !=arr[i]){
	        temp = arr[i];
	        arr[i] = small;
	        arr[position] = temp;
	    }
	}//outer for
	
	for(i=0 ; i<length ; i++){
	    printf("%d\n", arr[i]);
	}
	return 0;
}

