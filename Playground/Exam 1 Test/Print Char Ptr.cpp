#include <stdio.h>

int main(){

char* arr = "hello";

for(int i=0; i < 5; i ++){
	printf("%p:%c\n", arr + i, arr[i]);
}
}