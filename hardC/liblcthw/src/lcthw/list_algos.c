#include "list_algos.h"

int List_bubble_sort(List *list, List_compare cmp) {
	int scale = List_count(list) - 1;
	while (scale > 0) {
		ListNode *cur = list->first;
		int countdown = scale;
		while (countdown > 0) {
			if (cmp(cur->value, cur->next->value) > 0) {
		    	SWAP(cur->value, cur->next->value);
			}
			countdown --;
			cur = cur->next;
		}
		scale --;
	}
	return 0;
}

List *List_merge(List *left, List *right, List_compare cmp) {
	List *result = List_create();
	void *val = NULL;

	while (List_count(left) > 0 || List_count(right) > 0) {
		if (List_count(left) > 0 && List_count(right) > 0) {
			if (cmp(List_first(left), List_first(right)) <= 0) {
				val = List_shift(left);
			} else {
				val = List_shift(right);
			}

			List_push(result, val);
		} else if (List_count(left) > 0) {
			val = List_shift(left);
			List_push(result, val);
		} else if (List_count(right) > 0) {
			val = List_shift(right);
			List_push(result, val);
		}
	}
	
	return result;
}

List* List_merge_sort(List *list, List_compare cmp) {
	if (List_count(list) <= 1) {
		return list;
	}

	List *left = List_create();
	List *right = List_create();
	int middle = List_count(list) / 2;
	LIST_FOREACH(list, first, next, cur) {
		if (middle > 0) {
			List_push(left, cur->value);
		} else {
			List_push(right, cur->value);
		}

		middle--;
	}

	List *sort_left = List_merge_sort(left, cmp);
	List *sort_right = List_merge_sort(right, cmp);

	if (sort_left != left)
		List_destroy(left);
	if (sort_right != right)
		List_destroy(right);

	return List_merge(sort_left, sort_right, cmp);
}
