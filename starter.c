#include <stdio.h>

int main(void){
	
	int arr[] = {14,6,-20,21,100};
	int target = 12;
	int index = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i = len - 1;i>=index ;--i){
		arr[i + 1] = arr[i];
	}
		len++;
		arr[index] = target;
	for(int i = 0;i<len;++i){
		printf("%d, \b ",arr[i]);
	}

	return 0;
}

