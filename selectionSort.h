//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_SELECTIONSORT_H
#define AIRPORTP4_SELECTIONSORT_H

#include "printVec.h"

int sReads = 0;
int sWrites = 0;

template<typename Comparable>
void selectionSort(vector<Comparable> vec) {
    int swapIndex, i, minIndex;
    Comparable temp;
    for (swapIndex = 0; swapIndex < vec.size()-1; ++swapIndex) {
        // Loop through vector starting at swapIndex and keep track of min
        minIndex = swapIndex;
        for (i = swapIndex+1; i < vec.size(); ++i) {
            if (vec[i] < vec[minIndex]) {
                sReads +=2;
                // We have a new minimum
                minIndex = i;
            }
        }
        // Swap min value into swapIndex spot in vector
        temp = vec[swapIndex];
        sReads +=1;
        sWrites +=1;
        vec[swapIndex] = vec[minIndex];
        sReads +=1;
        sWrites +=1;
        vec[minIndex] = temp;
        sReads +=1;
        sWrites +=1;
        //printVec(vec);
    }
}

#endif //AIRPORTP4_SELECTIONSORT_H
