#include <iostream>
#include <vector>
#include "Airport.h"
#include "algStats.h"

const string python = "python";

int main() {
    cout << endl;

    //Create the airport vector from csv file
    vector<Airport> airports;
    getDataFromFile("../airports.csv", airports);

    //Call functions to calculate and output statistics for each algorithm
    calcBubbleStats(airports);
    calcInsertionStats(airports);
    calcMergeStats(airports);
    calcHeapStats(airports);
    calcSelectionStats(airports);
    calcQuickStats(airports);

    //Make CLI call to run Python* program
    string command;

    command = python + " ../Graphing.py";
    system(command.c_str());




    return 0;
}
