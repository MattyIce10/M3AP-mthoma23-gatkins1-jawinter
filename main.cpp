#include <iostream>
#include <vector>
#include "printVec.h"
#include "heapSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "radixSort.h"
#include "Airport.h"


int main() {cout << endl;

    vector<Airport> airports;
    getDataFromFile("../airports.csv", airports);


    for(int i = 100; i < 1100; i+=100){
        vector<int> elevVecBubble;
        for (int j = 0; j < i; ++j) {
            elevVecBubble.push_back(airports[j].getElevFt());
        }
        bubbleSort(elevVecBubble);
        //Print out Bubble sort reads/writes with various loops sizes
        cout << "The Bubble sort vector of size " << i << " had " << bReads << " reads." << endl;
        cout << "The Bubble sort vector of size " << i << " had " << bWrites << " writes." << endl;
        //cout << bReads << endl;
        //cout << bWrites << endl;
        bReads = 0;
        bWrites = 0;
    }

    for(int i = 100; i < 1100; i+=100){
        vector<int> elevVecInsertion;
        for (int j = 0; j < i; ++j) {
            elevVecInsertion.push_back(airports[j].getElevFt());
        }
        insertionSort(elevVecInsertion);
        //Print out Insertion sort reads/writes with various loops sizes
        cout << "The Insertion sort vector of size " << i << " had " << iReads << " reads." << endl;
        cout << "The Insertion sort vector of size " << i << " had " << iWrites << " writes." << endl;
        //cout << iReads << endl;
        //cout << iWrites << endl;
        iReads = 0;
        iWrites = 0;
    }


    for(int i = 100; i < 1100; i+=100){
        vector<int> elevVecMerge;
        for (int j = 0; j < i; ++j) {
            elevVecMerge.push_back(airports[j].getElevFt());
        }
        mergeSort(elevVecMerge);
        //Print out Merge sort reads/writes with various loops sizes
        cout << "The Merge sort vector of size " << i << " had " << mReads << " reads." << endl;
        cout << "The Merge sort vector of size " << i << " had " << mWrites << " writes." << endl;
        //cout << mReads << endl;
        //cout << mWrites << endl;
        mReads = 0;
        mWrites = 0;
    }


    for(int i = 100; i < 1100; i+=100){
        vector<int> elevVecHeap;
        for (int j = 0; j < i; ++j) {
            elevVecHeap.push_back(airports[j].getElevFt());
        }
        heapSort(elevVecHeap);
        //Print out Heap sort reads/writes with various loops sizes
        cout << "The Heap sort vector of size " << i << " had " << hReads << " reads." << endl;
        cout << "The Heap sort vector of size " << i << " had " << hWrites << " writes." << endl;
        //cout << hReads << endl;
        //cout << hWrites << endl;
        hReads = 0;
        hWrites = 0;
    }


    for(int i = 100; i < 1100; i+=100){
        vector<int> elevVecSelection;
        for (int j = 0; j < i; ++j) {
            elevVecSelection.push_back(airports[j].getElevFt());
        }
        selectionSort(elevVecSelection);
        //Print out Selection sort reads/writes with various loops sizes
        cout << "The Selection sort vector of size " << i << " had " << sReads << " reads." << endl;
        cout << "The Selection sort vector of size " << i << " had " << sWrites << " writes." << endl;
        //cout << sReads << endl;
        //cout << sWrites << endl;
        sReads = 0;
        sWrites = 0;


    }


    for(int i = 100; i < 1100; i+=100){
        vector<double> latVecQuickS;
        for (int j = 0; j < i; ++j) {
            latVecQuickS.push_back(airports[j].getLatDeg());
        }
        quickSortStable(latVecQuickS);
        //Print out QuickS sort reads/writes with various loops sizes
        cout << "The Stable Quick sort vector of size " << i << " had " << qSreads << " reads." << endl;
        cout << "The Stable Quick sort vector of size " << i << " had " << qSwrites << " writes." << endl;
        //cout << qSreads << endl;
        //cout << qSwrites << endl;
        qSreads = 0;
        qSwrites = 0;
    }



    return 0;
}
