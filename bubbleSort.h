//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_BUBBLESORT_H
#define AIRPORTP4_BUBBLESORT_H

#include "printVec.h"

int bReads = 0;
int bWrites = 0;

template<typename Comparable>
void bubbleSort(vector<Comparable> vec) {
    int numPasses = 0, i;
    Comparable temp;
    bool haveSwapped = true;
    while (haveSwapped) {
        haveSwapped = false;
        for (i = 0; i+1 < vec.size()-numPasses; ++i) {
            // Compare items at indices i and i+1 and swap if necessary
            if (vec[i] > vec[i+1]) {
                bReads+=2;

                temp = vec[i];
                bReads+=1;
                bWrites+=1;

                vec[i] = vec[i+1];
                bReads+=1;
                bWrites+=1;

                vec[i+1] = temp;
                bWrites+=1;
                bReads+=1;

                // Update haveSwapped
                haveSwapped = true;
            }
        }
        // Update numPasses
        ++numPasses;
        //printVec(vec);
    }
}

#endif //AIRPORTP4_BUBBLESORT_H
