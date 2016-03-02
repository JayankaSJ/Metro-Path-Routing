#include "stdafx.h"
#include "FreeEdges.h"

void free_edges(void)
{
	for (; edge_root; edge_root = e_next) {
		e_next = edge_root[BLOCK_SIZE].sibling;
		free(edge_root);
	}
}