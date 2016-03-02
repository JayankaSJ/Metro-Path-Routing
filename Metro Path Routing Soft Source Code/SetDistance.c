#include "stdafx.h"
#include "SetDistance.h"

void set_dist(node_t *nd, node_t *via, int d)
{
	int i, j;

	/* already knew better path */
	if (nd->via && d >= nd->dist) return;

	/* find existing heap entry, or create a new one */
	nd->dist = d;
	nd->via = via;

	i = nd->heap_idx;
	if (!i) i = ++heap_len;

	/* upheap */
	for (; i > 1 && nd->dist < heap[j = i / 2]->dist; i = j)
		(heap[i] = heap[j])->heap_idx = i;

	heap[i] = nd;
	nd->heap_idx = i;
}
