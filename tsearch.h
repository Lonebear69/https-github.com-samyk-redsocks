#ifndef TSEARCH_H_SAT_DEC_17_46_12_07_2019
#define TSEARCH_H_SAT_DEC_17_46_12_07_2019

#include <search.h>
//#include <features.h>

/* AVL tree height < 1.44*log2(nodes+2)-0.3, MAXH is a safe upper bound.  */
#define MAXH (sizeof(void*)*8*3/2)

struct node {
	const void *key;
	void *a[2];
	int h;
};

int __tsearch_balance(void **);

#endif
