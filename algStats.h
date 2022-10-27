#ifndef M3AP_MTHOMA23_GATKINS1_JAWINTER_ALGSTATS_H
#define M3AP_MTHOMA23_GATKINS1_JAWINTER_ALGSTATS_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Airport.h"

#include "printVec.h"
#include "heapSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "radixSort.h"

using namespace std;


//pass airport vector into function
void calcBubbleStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> bubbleSize;
    vector<int> bubbleReads;
    vector<int> bubbleWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/bubbleReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/bubbleWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        bubbleSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecBubble;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecBubble.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        bubbleSort(elevVecBubble);
        //add values to vectors
        bubbleReads.push_back(bReads);
        bubbleWrites.push_back(bWrites);
        //reset counters
        bReads = 0;
        bWrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Bubble sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < bubbleSize.size(); i++) {
        cout << bubbleSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < bubbleReads.size(); i++) {
        cout << bubbleReads[i] << " ";
        //write read values to a file
        MyFile1 << bubbleReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < bubbleWrites.size(); i++) {
        cout << bubbleWrites[i] << " ";
        //write write values to a file
        MyFile2 << bubbleWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}

//pass airport vector into function
void calcInsertionStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> insertionSize;
    vector<int> insertionReads;
    vector<int> insertionWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/insertionReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/insertionWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        insertionSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecInsertion;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecInsertion.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        insertionSort(elevVecInsertion);
        //add values to vectors
        insertionReads.push_back(iReads);
        insertionWrites.push_back(iWrites);
        //reset counters
        iReads = 0;
        iWrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Insertion sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < insertionSize.size(); i++) {
        cout << insertionSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < insertionReads.size(); i++) {
        cout << insertionReads[i] << " ";
        //write read values to a file
        MyFile1 << insertionReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < insertionWrites.size(); i++) {
        cout << insertionWrites[i] << " ";
        //write write values to a file
        MyFile2 << insertionWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}

//pass airport vector into function
void calcMergeStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> mergeSize;
    vector<int> mergeReads;
    vector<int> mergeWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/mergeReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/mergeWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        mergeSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecMerge;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecMerge.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        mergeSort(elevVecMerge);
        //add values to vectors
        mergeReads.push_back(mReads);
        mergeWrites.push_back(mWrites);
        //reset counters
        mReads = 0;
        mWrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Merge sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < mergeSize.size(); i++) {
        cout << mergeSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < mergeReads.size(); i++) {
        cout << mergeReads[i] << " ";
        //write read values to a file
        MyFile1 << mergeReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < mergeWrites.size(); i++) {
        cout << mergeWrites[i] << " ";
        //write write values to a file
        MyFile2 << mergeWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}

//pass airport vector into function
void calcHeapStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> heapSize;
    vector<int> heapReads;
    vector<int> heapWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/heapReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/heapWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        heapSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecHeap;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecHeap.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        heapSort(elevVecHeap);
        //add values to vectors
        heapReads.push_back(hReads);
        heapWrites.push_back(hWrites);
        //reset counters
        hReads = 0;
        hWrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Heap sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < heapSize.size(); i++) {
        cout << heapSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < heapReads.size(); i++) {
        cout << heapReads[i] << " ";
        //write read values to a file
        MyFile1 << heapReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < heapWrites.size(); i++) {
        cout << heapWrites[i] << " ";
        //write write values to a file
        MyFile2 << heapWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}

//pass airport vector into function
void calcSelectionStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> selectionSize;
    vector<int> selectionReads;
    vector<int> selectionWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/selectionReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/selectionWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        selectionSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecSelection;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecSelection.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        selectionSort(elevVecSelection);
        //add values to vectors
        selectionReads.push_back(sReads);
        selectionWrites.push_back(sWrites);
        //reset counters
        sReads = 0;
        sWrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Selection sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < selectionSize.size(); i++) {
        cout << selectionSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < selectionReads.size(); i++) {
        cout << selectionReads[i] << " ";
        //write read values to a file
        MyFile1 << selectionReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < selectionWrites.size(); i++) {
        cout << selectionWrites[i] << " ";
        //write write values to a file
        MyFile2 << selectionWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}

//pass airport vector into function
void calcQuickStats(vector<Airport>(airports)){
    //Declare vectors to keep track of statistics
    vector<int> quickSize;
    vector<int> quickReads;
    vector<int> quickWrites;
    //declare and open files
    ofstream MyFile1;
    MyFile1.open("data/quickReads.txt");
    ofstream MyFile2;
    MyFile2.open("data/quickWrites.txt");
    //write to loop to create various vector sizes
    for(int i = 100; i < 1100; i+=100){
        //add size to vector
        quickSize.push_back(i);
        //declare vector to sort
        vector<int> elevVecQuickS;
        //write loop to add values to vector
        for (int j = 0; j < i; ++j) {
            elevVecQuickS.push_back(airports[j].getElevFt());
        }
        //run alg on vector
        quickSortStable(elevVecQuickS);
        //add values to vectors
        quickReads.push_back(qSreads);
        quickWrites.push_back(qSwrites);
        //reset counters
        qSreads = 0;
        qSwrites = 0;
    }
    //use loops to output through algorithm statistics
    cout << "The Stable Quick sort algorithm had the corresponding read and write values for each vector size." << endl;
    cout << "Sizes: ";
    for(int i = 0; i < quickSize.size(); i++) {
        cout << quickSize[i] << " ";
    }
    cout << endl;
    cout << "Reads: ";
    for(int i = 0; i < quickReads.size(); i++) {
        cout << quickReads[i] << " ";
        //write read values to a file
        MyFile1 << quickReads[i] << "\n";
    }
    cout << endl;
    cout << "Writes: ";
    for(int i = 0; i < quickWrites.size(); i++) {
        cout << quickWrites[i] << " ";
        //write write values to a file
        MyFile2 << quickWrites[i] << "\n";
    }
    cout << endl;
    cout << endl;
    //close files
    MyFile1.close();
    MyFile2.close();
}


#endif //M3AP_MTHOMA23_GATKINS1_JAWINTER_ALGSTATS_H
