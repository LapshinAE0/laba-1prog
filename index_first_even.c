#include "index_first_even.h"

int index_first_even(int list[], int len){
	for(int i = 0;i < len;i++){
		if(list[i] % 2 == 0){
			return i;
		}
	}
	return -1;
}


