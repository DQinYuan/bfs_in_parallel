/**********************************************************************
filename:graph.c
author: onesuper
email: onesuperclark@gmail.com

defining the graph's, node's, edge's structures in this file
 
nodes and edges are two big arrays:
 
each node in nodes array has two indexing infomation to
find all its outcoming edges(start and width).

the dest variable of each edge in edges array points out
the node it connecting to.
************************************************************************/

typedef struct node_t 
{
	 unsigned int start;		/* starting index of edges */
	 unsigned int edge_num;
}Node;

typedef struct edge_t
{
	 unsigned int dest;			/* index of nodes */
	 unsigned int cost;
 }Edge;


FILE *fp;
Node* NODE_LIST;
Edge* EDGE_LIST;
unsigned int NUM_OF_NODES;
unsigned int NUM_OF_EDGES;
unsigned int SOURCE_NODE_NO;


	  
	 
		  
	 
		  
	 
