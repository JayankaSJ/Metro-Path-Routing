#include "stdafx.h"
#include "Database.h"
#include "Linker.h"

void InitializeDatabase(void){
#	define N_NODES ('w' - 'A' + 1) 
	nodes = (node_t*)calloc(sizeof(node_t), N_NODES);

	for (int i = 0; i < N_NODES; i++)
		sprintf(nodes[i].name, "%c", 'A' + i);

#	define E(a, b, c, t) add_edge(nodes + (a - 'A'), nodes + (b - 'A'), c, t)
#	define D(x, y, z, T)  E(x, y, z, T); E(y, x, z, T)

	/*C line*/
	D('Y', 'h', 100 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('h', 'p', 100 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('p', 'X', 100 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('X', 'U', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('U', '_', 6 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('_', 'r', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('r', 'I', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('I', 'N', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C'); //Florenc
	D('N', '^', 1 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('^', 'P', 1 * TIME_SCALER_PER_DOT_LINE_C, 'C'); //Muzeum
	D('P', 's', 3 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('s', 'g', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('g', 'f', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('f', 'E', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('E', 'S', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('S', 'k', 3 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('k', 'C', 2 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('C', 'd', 3 * TIME_SCALER_PER_DOT_LINE_C, 'C');
	D('d', 'J', 3 * TIME_SCALER_PER_DOT_LINE_C, 'C');


	/*B line*/
	D('v', 'q', 3 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('q', 'Z', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('Z', '[', 1 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('[', 'M', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('M', 'b', 1 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('b', 'Q', 3 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('Q', 'i', 3 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('i', 'm', 4 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('m', 'A', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('A', 'T', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('T', 'a', 1 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('a', ']', 1 * TIME_SCALER_PER_DOT_LINE_B, 'B'); //Mustek
	D(']', 'c', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('c', 'I', 1 * TIME_SCALER_PER_DOT_LINE_B, 'B'); //Florenc
	D('I', 'W', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('W', 'O', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('O', 'e', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('e', 'D', 3 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('D', 't', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('t', 'V', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('V', 'K', 3 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('K', 'j', 4 * TIME_SCALER_PER_DOT_LINE_B, 'B');
	D('j', 'B', 2 * TIME_SCALER_PER_DOT_LINE_B, 'B');

	/*A line*/
	D('F', 'L', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('L', '\\', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('\\', 'n', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('n', ']', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D(']', '^', 1 * TIME_SCALER_PER_DOT_LINE_A, 'A'); //Mustek
	D('^', '`', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A'); //Museum
	D('`', 'R', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('R', 'H', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('H', 'u', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('u', 'o', 3 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('o', 'l', 3 * TIME_SCALER_PER_DOT_LINE_A, 'A');
	D('l', 'G', 2 * TIME_SCALER_PER_DOT_LINE_A, 'A');


	heap = (heap_t*)calloc(sizeof(heap_t), N_NODES + 1);
	heap_len = 0;

}