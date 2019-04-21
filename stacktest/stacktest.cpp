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
	for (int i = 0; i < 10; i++) {
		char c = getchar();
		Push(s, atoi(&c));
	}
	while(s.len != 0){
		int x;
		Pop(s, x);
		printf("%d", x);
	}

	printf("\n按任意键继续……");
	getchar();
    return 0;
}

