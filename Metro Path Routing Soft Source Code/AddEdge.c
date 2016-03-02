#include "stdafx.h"
#include "AddEdge.h"


/* Don't mind the memory management stuff, they are besides the point.
Pretend e_next = malloc(sizeof(edge_t)) */
void add_edge(node_t *a, node_t *b, int d, char Type)
{
	if (e_next == edge_root) {
		edge_root = (edge_t*)malloc(sizeof(edge_t)* (BLOCK_SIZE + 1));
		edge_root[BLOCK_SIZE].sibling = e_next;
		e_next = edge_root + BLOCK_SIZE;
	}
	--e_next;

	e_next->nd = b;
	e_next->len = d;
	e_next->EdgeType = Type;
	e_next->sibling = a->edge;
	a->edge = e_next;
}

