#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	return val1 == val2;
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	int flag = 0;
	if(sum == val1){
		flag++;
	}
	if(sum == val2){
		flag++;
	}
	if(sum == val3){
		flag++;
	}
	if(sum == val1+val2){
		flag++;
	}
	if(sum == val1+val3){
		flag++;
	}
	if(sum == val3+val2){
		flag++;
	}
	if(sum == val3+val2+val1){
		flag++;
	}
	
	return flag;
}
