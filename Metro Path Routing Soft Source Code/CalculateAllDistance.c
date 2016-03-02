#include "stdafx.h"
#include "CalculateAllDistance.h"

/* --- Dijkstra stuff; unreachable nodes will never make into the queue --- */
void CalculateAllDistance(node_t *start)
{
	node_t *lead;
	edge_t *e;

	set_dist(start, start, 0);
	while ((lead = pop_queue())){
		for (e = lead->edge; e; e = e->sibling) {
			set_dist(e->nd, lead, lead->dist + e->len);
		}
	}
}
