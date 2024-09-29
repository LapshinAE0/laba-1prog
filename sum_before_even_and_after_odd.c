#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"

int sum_before_even_and_after_odd(int list[], int len){
	int su = 0;
	int sum = sum_between_even_odd(list, len);
	for(int i = 0; i < len; i++){
        	su += abs(list[i]);
	}
	int otvet = su - sum;
	return otvet;
}
