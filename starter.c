#include <stdio.h>

int main(void){
	int arr[] = {10,20,30,40,50};

	/* TRAVERSING CODE START*/
	// for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
	// 	printf("%d\n", arr[i]);
	/* TRAVERSING CODE END*/

	/* SEARCHING CODE START*/
	// int search = 10;
	// int ans = -1;
	// for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
	// 	if (search == arr[i]) {
	// 		ans = i;
	// 		break;
	// 	}
	// }
	// printf("%d\n",ans);
	/* SEARCHING CODE START*/

	/* INSERTION CODE START*/
	// int target = 25;
	// int position = 3;
	// int len = sizeof(arr)/sizeof(arr[0]);
	//
	// for(int i = len;i>=position ;--i){
	// 	arr[i] = arr[i - 1];
	// }
	// 	arr[position - 1] = target;
	// 	len++;
	// for(int i = 0;i<len;++i){
	// 	printf("%d, \b ",arr[i]);
	// }
	/* INSERTION CODE END*/

	/* DELETION CODE START*/
	// int pos = 3;
	// int len = sizeof(arr)/sizeof(arr[0]);
	//
	// for (int i = pos; i < len; i++) {
	// 	arr[i-1] = arr[i];
	// }
	// len--;
	// for(int i = 0;i<len;++i){
	// 	printf("%d, \b ",arr[i]);
	// }
	/* DELETION CODE END*/

	return 0;
}

