#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_add.h"
#include "sum_between_even_odd.h"

int sum_between_even_odd(int list[], int len){
	int first = index_first_even(list, len);
	int last =  index_last_add(list, len);
	int sum = 0;
	for(int i = first; i < last; i++){
		sum += abs(list[i]);
		}
	return sum;
}
