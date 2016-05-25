#include <stdio.h>

int main(void) {
	// your code goes here
	int a[] = {71, 14, 33, 27, 54, 10, 35, 19, 42, 44};
	int length = sizeof(a)/sizeof(int);
	int i=0, temp=0;
	int l = length;
	while(l>1){
	     l = l/2;
        for(i=0; i+l<length; i++){
            if(a[i]>a[i+l]){
            temp = a[i];
            a[i] = a[i+l];
            a[i+l] = temp;
            }//if end
        }//for end
	}
    
    for(i=0; i<length; i++){
        printf("%d\n",a[i]);
    }
	return 0;
}

