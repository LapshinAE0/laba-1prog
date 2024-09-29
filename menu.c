#include <stdlib.h>
#include <stdio.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"


int main(){
        int a;
        int list[100];
        int len = 0;
	char g = 0;

        scanf("%d%c", &a, &g);
        while (g != '\n'){
	scanf("%d%c", &list[len], &g);
	len++;
	}

        if (index_first_even(list, len) == -1 || index_last_odd(list, len) == -1){
                printf("Данные некорректны");
		return 0;
        }

        switch (a){
                case 0:
                        printf("%d\n", index_first_even(list, len));
                        break;
                case 1:
                        printf("%d\n", index_last_odd(list, len));
                        break;
                case 2:
                        printf("%d\n", sum_between_even_odd(list, len));
                        break;
                case 3:
                        printf("%d\n", sum_before_even_and_after_odd(list, len));
                        break;
                default:
                        printf("Данные некорректны");
                        break;
        }

        return 0;
}
