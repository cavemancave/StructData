// stacktest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Stack.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{

	Stack s;
	Init(s);
	int N;
	scanf_s("%d", &N);
	while (N) {
		Push(s, N % 8);
		N = N / 8;
	}
	while(!StackEmpty(s)){
		int e;
		Pop(s, e);
		printf("%d", e);
	}

    return 0;
}

