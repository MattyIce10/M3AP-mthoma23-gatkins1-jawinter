//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_QUICKSORT_H
#define AIRPORTP4_QUICKSORT_H

#include "printVec.h"


int qSreads = 0;
int qSwrites = 0;
int qUreads = 0;
int qUwrites = 0;

template<typename Comparable>
void quickSortStableRec(vector<Comparable> &vec) {
    // Recursive base case
    if (vec.size() <= 1) {
        return;
    }

    // Choose a partition element
    Comparable partition = vec[0];
    qSreads +=1;
    qSwrites +=1;

    vector<Comparable> smaller, equal, larger;
    // Loop through vec and populate smaller, equal, larger
    int i;
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i] < partition) {
            qSreads +=2;
            smaller.push_back(vec[i]);
            qSreads +=1;
            qSwrites +=1;
        } else if (vec[i] > partition) {
            qSreads +=2;
            larger.push_back(vec[i]);
            qSreads +=1;
            qSwrites +=1;
        } else {
            equal.push_back(vec[i]);
            qSreads +=1;
            qSwrites +=1;
        }
    }

    // Recursive calls
    quickSortStableRec(smaller);
    quickSortStableRec(larger);

    // Copy everything back into vec
    for (i = 0; i < vec.size(); ++i) {
        if (i < smaller.size()) {
            vec[i] = smaller[i];
            qSreads +=1;
            qSwrites +=1;
        } else if (i - smaller.size() < equal.size()) {
            vec[i] = equal[i - smaller.size()];
            qSreads +=1;
            qSwrites +=1;
        } else {
            vec[i] = larger[i - (smaller.size() + equal.size())];
            qSreads +=1;
            qSwrites +=1;
        }
    }

    //printVec(vec);
}

template<typename Comparable>
void quickSortStable(vector<Comparable> vec) {
    quickSortStableRec(vec);
}

template<typename Comparable>
void quickSortUnstableRec(vector<Comparable> &vec, int startIndex, int endIndex) {
    if (endIndex <= startIndex) {
        // There is only one element left. Nothing to do.
        return;
    }
    Comparable partition = vec[startIndex];
    Comparable temp;
    int i;
    int largerElementIndex = startIndex + 1;
    for (i = startIndex; i <= endIndex; ++i) {
        if (vec[i] < partition) {
            // Swap the element with the one at largerElementIndex to keep smaller elements grouped
            temp = vec[i];
            vec[i] = vec[largerElementIndex];
            vec[largerElementIndex] = temp;
            // Update largerElementIndex
            ++largerElementIndex;
        }
    }
    vec[startIndex] = vec[largerElementIndex - 1];
    vec[largerElementIndex - 1] = partition;

    //printVec(vec);

    // Recursive call for less-than-partition side
    quickSortUnstableRec(vec, startIndex, largerElementIndex - 2);
    // Recursive call for greater-than-or-equal-to-partition side
    quickSortUnstableRec(vec, largerElementIndex, endIndex);
}

template<typename Comparable>
void quickSortUnstable(vector<Comparable> vec) {
    quickSortUnstableRec(vec, 0, vec.size() - 1);
}

#endif //AIRPORTP4_QUICKSORT_H
