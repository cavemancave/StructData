#pragma once
#ifndef __STACK__
#define __STACK__

#define OK 0
#define ERR 1

typedef int ElemType;
typedef struct LinkNode {
	struct LinkNode *next;
	ElemType data;
}Slink, *Link;

typedef struct {
	Link base, top;
	int len;
}Stack;

int Init(Stack &s);
int Push(Stack &s, ElemType e);
int Pop(Stack &s, ElemType &e);
bool StackEmpty(Stack &s);
#endif