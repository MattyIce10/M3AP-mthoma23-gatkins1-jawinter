//
// Created by Matt on 3/15/2022.
//

#ifndef AIRPORTP3_AIRPORT_H
#define AIRPORTP3_AIRPORT_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using std::ifstream, std::left, std::ostream, std::right, std::setw, std::string, std::vector;

class Airport {
private:
    int id;
    string name;
    double latDeg;
    double longDeg;
    int elevFt;

public:
    // Constructors
    Airport() {
        id = 111111111;
        name = "International";
        latDeg = 11.11;
        longDeg = 11.11;
        elevFt = 11;
    }
    Airport(int id, string name, double latDeg, double longDeg, int elevFt) {
        this->id = id;
        this->name = name;
        this->latDeg = latDeg;
        this->longDeg = longDeg;
        this->elevFt = elevFt;
    }

    // Getters
    int getId() const {
        return id;
    }
    string getName() const {
        return name;
    }
    double getLatDeg() const {
        return latDeg;
    }
    double getLongDeg() const {
        return longDeg;
    }
    int getElevFt() const {
        return elevFt;
    }

    // Setters
    void setId(int id) {
        this->id = id;
    }
    void setName(string name) {
        this->name = name;
    }
    void setLatDeg(double latDeg) {
        this->latDeg = latDeg;
    }
    void setLongDeg(double longDeg) {
        this->longDeg = longDeg;
    }
    void setElevFt(int elevFt) {
        this->elevFt = elevFt;
    }

    // Overloaded Operators
    friend ostream& operator << (ostream& outs, const Airport& port) {
        outs << setw(10) << left << port.getId();
        outs << setw(60) << left << port.getName();
        outs << setw(15) << port.getLatDeg();
        outs << setw(15) << port.getLongDeg();
        outs << setw(8) << right << port.getElevFt();
        return outs;
    }
};

//Function to extract data from csv.
void getDataFromFile(string filename, vector<Airport>& airports) {
    ifstream fileIn;
    fileIn.open(filename);

    string header;
    if (fileIn) {
        getline(fileIn, header);
    }

    // Declare variables to be read in from the file
    int id, elevFt;
    double latDeg, longDeg;
    string name;
    char comma;
    // While the file input stream is in a good state
    // and we are not at the end of the file
    while (fileIn && fileIn.peek() != EOF) {
        // Read id
        fileIn >> id >> comma;

        // Read name
        getline(fileIn,name, ',');

        // Read latDeg
        fileIn >> latDeg >> comma;

        // Read longDeg
        fileIn >> longDeg >> comma;

        // Read elevFt
        fileIn >> elevFt;

        // Create a Airport object to store the data and add it to the vector
        airports.push_back(Airport( id, name, latDeg, longDeg, elevFt));
    }
    fileIn.close();

}

//Function to calculate the maximum value of elevation column.
int getMaxElevation(vector<Airport>& airports){

    // Declare variables to be read in from the file
    vector<int> elevVec;
    for (int i = 0; i < airports.size(); ++i) {
        elevVec.push_back(airports[i].getElevFt());
    }

    //vector<int>::const_iterator maxElev;
    int largest_element  = *max_element(elevVec.begin(),elevVec.end());
    return largest_element;


}

bool operator == (const Airport& lhs, const Airport& rhs) {
    // Only need to compare the unique attribute
    return lhs.getLatDeg() == rhs.getLatDeg();
}

bool operator >= (const Airport& lhs, const Airport& rhs) {
    // Only need to compare the unique attribute
    return lhs.getLatDeg() >= rhs.getLatDeg();
}

bool operator <= (const Airport& lhs, const Airport& rhs) {
    // Only need to compare the unique attribute
    return lhs.getLatDeg() <= rhs.getLatDeg();
}

bool operator > (const Airport& lhs, const Airport& rhs) {
    // Only need to compare the unique attribute
    return lhs.getLatDeg() > rhs.getLatDeg();
}

bool operator < (const Airport& lhs, const Airport& rhs) {
    // Only need to compare the unique attribute
    return lhs.getLatDeg() < rhs.getLatDeg();
}



#endif //AIRPORTP3_AIRPORT_H
