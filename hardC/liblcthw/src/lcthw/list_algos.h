#ifndef _LIST_ALGOS_H_
#define _LIST_ALGOS_H_
#include <stdio.h>
#include <dbg.h>
#include "list.h"
typedef int (*List_compare)(const char *s1, const char *s2);

int List_bubble_sort(List *list, List_compare cmp);

List* List_merge_sort(List *list, List_compare cmp);

#define SWAP(A, B) char *temp = A; A = B; B = temp
#endif
