#include "stdafx.h"
#include "OrderingPath.h"

void OrderingPath(node_t *nd)
{
	if (nd->via == nd){
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].name = nd->name[0];
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].cost = nd->dist;
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].EdgeType = nd->edge->EdgeType;
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].EdgeLength = 0;
		PathOrderHolder.NextStoreIndex++;
	}
	else {
		OrderingPath(nd->via);
		ReturendValue = nd->dist;
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].name = nd->name[0];
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex - 1].cost = nd->dist - nd->via->dist;
		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex].EdgeType = nd->edge->EdgeType;

		int weight = 1;
		switch (nd->edge->EdgeType) {
		case (65) :
			weight = TIME_SCALER_PER_DOT_LINE_A;
			break;
		case (66) :
			weight = TIME_SCALER_PER_DOT_LINE_B;
			break;
		case (67) :
			weight = TIME_SCALER_PER_DOT_LINE_C;
			break;
		default:
			break;
		}

		PathOrderHolder.StationOrder[PathOrderHolder.NextStoreIndex - 1].EdgeLength = (nd->dist - nd->via->dist)/ weight;
		PathOrderHolder.NextStoreIndex++;

	}
}