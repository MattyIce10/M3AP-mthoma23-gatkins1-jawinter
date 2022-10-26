//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_RADIXSORT_H
#define AIRPORTP4_RADIXSORT_H

#include "printVec.h"
#include <cmath>

// Note: Not a template function
void radixSort(vector<int> vec, int numDigits) {
    int iteration, i, digit, bucket, item;
    vector<vector<int>> buckets(10);
    for (iteration = 0; iteration < numDigits; ++iteration) {
        // Copy everything from vec into buckets
        for (i = 0; i < vec.size(); ++i) {
            digit = (vec[i] / int(pow(10, iteration)) % 10);
            buckets[digit].push_back(vec[i]);
        }
        // Copy everything from buckets back into vec
        i = 0;
        for (bucket = 0; bucket < buckets.size(); ++bucket) {
            for (item = 0; item < buckets[bucket].size(); ++item) {
                vec[i] = buckets[bucket][item];
                ++i;
            }
            buckets[bucket].clear();
        }
        printVec(vec);
    }
}

#endif //AIRPORTP4_RADIXSORT_H
