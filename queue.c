// Author: Montana Esguerra
// Date: 6/25/20
// Filename: queue.c
// Description: Implementation file for queue methods

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Sets all block values to 0
void block_nullify(struct block* in)
{
    in->x = 0;
    in->y = 0;
}

// Sets the x and y values of a block using the given paramters
void set_block(int xin, int yin, struct block* in)
{
    in->x = xin;
    in->y = yin;
}

// Prints the values of a given block
void print_block(struct block* in)
{
    printf("Printing Block:\n");
    printf("X: %d\n", in->x);
    printf("Y: %d\n", in->y);
}

