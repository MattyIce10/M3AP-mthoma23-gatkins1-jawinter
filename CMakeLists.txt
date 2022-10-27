cmake_minimum_required(VERSION 3.21)
project(M3AP_mthoma23_gatkins1_jawinter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M3AP_mthoma23_gatkins1_jawinter
        Airport.h
        bubbleSort.h
        heapSort.h
        insertionSort.h
        main.cpp
        mergeSort.h
        printVec.h
        quickSort.h
        radixSort.h
        selectionSort.h algStats.h)
