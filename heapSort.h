//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_HEAPSORT_H
#define AIRPORTP4_HEAPSORT_H

#include "printVec.h"
#include <vector>
using std::vector;

int hReads = 0;
int hWrites = 0;

// Helper function for heapSort
inline int leftChild(int i) {
    return 2 * i + 1;
}

// Helper function for heapSort
// i is the index of the value being percolated down
// n is the number of items in the heap
template <typename Comparable>
void percolateDown(vector<Comparable> &items, int i, int n) {
    int child;
    Comparable tmp;

    for(tmp = items[i]; leftChild(i) < n; i = child) {
        hReads+=1;
        hWrites+=1;
        child = leftChild(i);
        // choose the child with the larger value
        if (child != n - 1 && items[child] < items[child + 1]) {
            hReads+=2;
            ++child;
        }
        // if the parent is less than the child, swap them
        if (tmp < items[child]){
            hReads+=2;
            items[i] = items[child];
            hReads+=1;
            hWrites+=1;
        } else {
            // parent is >= both children. nothing more to do.
            break;
        }
    }
    items[i] = tmp;
    hReads+=1;
    hWrites+=1;
}

template <typename Comparable>
vector<Comparable> heapSort(vector<Comparable> items) {
    int i, j;
    Comparable temp;
    // build the heap (with max value at root)
    for (i = items.size() / 2 - 1; i >= 0; --i) {
        percolateDown(items, i, items.size());
    }
    //printVec(items);
    // keep deleting the max
    for (j = items.size() - 1; j > 0; --j) {
        // swap the maximum out
        temp = items[0];
        hReads+=1;
        hWrites+=1;
        items[0] = items[j];
        hReads+=1;
        hWrites+=1;
        items[j] = temp;
        hReads+=1;
        hWrites+=1;

        // make it into a heap again
        percolateDown(items, 0, j);

        //printVec(items);
    }
    return items;
}


#endif //AIRPORTP4_HEAPSORT_H
