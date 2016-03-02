#ifndef MAINSTRUCTURE_H_DEFINED
#define MAINSTRUCTURE_H_DEFINED

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

#define BLOCK_SIZE 15							/* --- edge management --- */

typedef struct node_t node_t, *heap_t;			/*declarations*/
typedef struct edge_t edge_t;

extern edge_t *edge_root;
extern edge_t *e_next;
extern node_t *nodes;

/* --- priority queue stuff --- */
extern heap_t *heap;
extern int heap_len;


struct edge_t {									/* Main edge structure */
	node_t *nd;									/* target of this edge */
	edge_t *sibling;							/* for singly linked list */
	int len;									/* edge cost */
	char EdgeType;
};

struct node_t {									/* main Node structure */
	edge_t *edge;								/* singly linked list of edges */
	node_t *via;								/* where previous node is in shortest path */
	int dist;									/* distance from origin node */
	char name[8];								/* the, node, name */
	int heap_idx;								/* link to heap position for updating distance */
};



#endif