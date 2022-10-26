//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_INSERTIONSORT_H
#define AIRPORTP4_INSERTIONSORT_H

#include "printVec.h"


int iReads = 0;
int iWrites = 0;

template<typename Comparable>
void insertionSort(vector<Comparable> vec) {
    int unsortedStartIndex, insertIndex;
    Comparable toBeInserted;
    for (unsortedStartIndex = 1; unsortedStartIndex < vec.size(); ++unsortedStartIndex) {
        toBeInserted = vec[unsortedStartIndex];
        iReads+=1;
        iWrites+=1;
        // Loop to shift over the larger elements
        insertIndex = unsortedStartIndex - 1;
        while (insertIndex >= 0 && toBeInserted < vec[insertIndex]) {
            iReads+=2;
            vec[insertIndex + 1] = vec[insertIndex];
            iReads+=1;
            iWrites+=1;
            --insertIndex;
        }
        // Put toBeInserted back into vec
        vec[insertIndex + 1] = toBeInserted;
        iReads+=1;
        iWrites+=1;
        //printVec(vec);
    }
}

#endif //AIRPORTP4_INSERTIONSORT_H
