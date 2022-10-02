#include <stdio.h>   // printf

#include "../include/lib_func.h"


int main()
{
	int val1, val2, val3, sum;

	val1 = 1;
	val2 = 2;
	printf("%dと%dは%s\n", val1, val2, is_same(val1, val2) ? "等しい" : "等しくない");

	val1 = 0;
	val2 = 0;
	printf("%dと%dは%s\n", val1, val2, is_same(val1, val2) ? "等しい" : "等しくない");

	sum = 2;
	val1 = 1;
	val2 = 1;
	val3 = 1;
	printf("%dと%dと%dの任意の数の和が%dになる組み合わせは%d通りです\n", val1, val2, val3, sum, calc_combinations_3(sum, val1, val2, val3));

	sum = 3;
	val1 = 1;
	val2 = 2;
	val3 = 3;
	printf("%dと%dと%dの任意の数の和が%dになる組み合わせは%d通りです\n", val1, val2, val3, sum, calc_combinations_3(sum, val1, val2, val3));
}
