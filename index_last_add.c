#include "index_last_add.h"

int index_last_add(int list[], int len){
        for(int i = len - 1;i >= 0;i--){
                if(list[i] % 2 != 0){
                        return i;
                }
	}
        return -1;
}


