#include <stdio.h>

int main(void){
	
	int arr[] = {14,6,-20,21,100};
	int target = 111;
	int position = 4;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i = len;i>=position ;--i){
		arr[i] = arr[i - 1];
	}
		len++;
		arr[position - 1] = target;
	for(int i = 0;i<len;++i){
		printf("%d, \b ",arr[i]);
	}

	return 0;
}

