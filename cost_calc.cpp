#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, char* argv) {
    double l2n;
    double rms=0;

    ifstream inputFile; 

    inputFile.open("incorrect.csv");
    
    string line = "";
    while (getline(inputFile,line)){
        double x_n;
        double y_n;
        double z_n;
        double delta_x;
        double delta_y;
        double delta_z;
        double l2norm;
        string tempString = "";
        stringstream inputString(line);
        getline(inputString,tempString,',');
        x_n=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        y_n=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        z_n=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        delta_x=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        delta_y=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        delta_z=atof(tempString.c_str());
        tempString = "";
        getline(inputString,tempString,',');
        l2norm=atof(tempString.c_str());
        tempString = "";

        line = "";

        // l2n = sqrt(pow(delta_x,2) + pow(delta_x,2) + pow(delta_x,2));
        rms += pow(l2norm,2);
    }
    rms = rms/100;
    rms = sqrt(rms);
    cout<< rms;
}