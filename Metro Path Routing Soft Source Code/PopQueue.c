#include "stdafx.h"
#include "PopQueue.h"


node_t * pop_queue(void)
{
	node_t *nd, *tmp;
	int i, j;

	if (!heap_len) return 0;

	/* remove leading element, pull tail element there and downheap */
	nd = heap[1];
	tmp = heap[heap_len--];

	for (i = 1; i < heap_len && (j = i * 2) <= heap_len; i = j) {
		if (j < heap_len && heap[j]->dist > heap[j + 1]->dist) j++;

		if (heap[j]->dist >= tmp->dist) break;
		(heap[i] = heap[j])->heap_idx = i;
	}

	heap[i] = tmp;
	tmp->heap_idx = i;

	return nd;
}