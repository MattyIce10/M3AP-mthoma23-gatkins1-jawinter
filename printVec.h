//
// Created by Matt on 4/1/2022.
//

#ifndef AIRPORTP4_PRINTVEC_H
#define AIRPORTP4_PRINTVEC_H

#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

template<typename Comparable>
void printVec(const vector<Comparable> &v) {
    for (int i = 0; i < v.size(); ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << v[i];
    }
    cout << endl;
}

#endif //AIRPORTP4_PRINTVEC_H
