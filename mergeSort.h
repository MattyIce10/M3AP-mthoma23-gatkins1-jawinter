//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_MERGESORT_H
#define AIRPORTP4_MERGESORT_H

#include "printVec.h"

int mReads = 0;
int mWrites = 0;

template<typename Comparable>
void mergeSortRec(vector<Comparable> &vec, int startIndex, int endIndex, vector<Comparable> &temp) {
    // Recursive base case is when there is one element left
    if (startIndex >= endIndex) {
        return;
    }

    // Recursive calls for the left and right halves
    int centerIndex = (startIndex + endIndex) / 2;
    mergeSortRec(vec, startIndex, centerIndex, temp);
    mergeSortRec(vec, centerIndex + 1, endIndex, temp);

    // Merge
    int i = 0;
    int leftIndex = startIndex, rightIndex = centerIndex + 1;
    while (leftIndex <= centerIndex && rightIndex <= endIndex) {

        if (vec[leftIndex] < vec[rightIndex]) {
            mReads+=2;
            temp[i] = vec[leftIndex];
            mReads+=1;
            mWrites+=1;
            ++leftIndex;
        } else {
            temp[i] = vec[rightIndex];
            mReads+=1;
            mWrites+=1;
            ++rightIndex;
        }
        ++i;
    }

    // At this point in the code, one of the halves is empty and the other
    // one has at least one element left in it. The code will enter one of
    // the next two loops.
    while (leftIndex <= centerIndex) {
        temp[i] = vec[leftIndex];
        mReads+=1;
        mWrites+=1;
        ++leftIndex;
        ++i;
    }
    while (rightIndex <= endIndex) {
        temp[i] = vec[rightIndex];
        mReads+=1;
        mWrites+=1;
        ++rightIndex;
        ++i;
    }

    // Now copy everything from temp back into vec
    for (int j = 0; j < i; ++j) {
        vec[startIndex + j] = temp[j];
        mReads+=1;
        mWrites+=1;
    }

    //printVec(vec);
}

template<typename Comparable>
void mergeSort(vector<Comparable> vec) {
    vector<Comparable> temp;
    temp.resize(vec.size());
    mergeSortRec(vec, 0, vec.size() - 1, temp);
}

#endif //AIRPORTP4_MERGESORT_H
