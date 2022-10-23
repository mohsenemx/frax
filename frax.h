// Including required libraries
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

// Defining Functions
#define Logt(x) std::logt(text,filename);
#define log(x) std::logg(text);
#define rnd(x,y) std::trnd(min, max);
// Defining Math Related Things
#define pi 3.14159265359;
#define phi 1.61803398;

const string frax_version = "v 0.3.6 Beta"; // Useless peace of information, Optional to delete.

string fname = "latest.txt"; // fname is used for functions like logt();

void logt(string text, string filename) { // logt function.
    ofstream lognow;
    fname = filename;
    lognow.open(fname, std::ios::out | std::ios::app | std::ios::ate);
    lognow << text << "\n";
    lognow.close();
}

void logg(string text) { // log function
    cout << text << "\n";
}

int trnd(int min, int max) { // in beta, the function for random number.
    srand(time(0));
    long long int rsfc = rand() % 4;
}