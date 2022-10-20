#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

#define Logt(x) std::logt(x);
#define log(x) std::log(x);
#define pi 3.14159265359;


std::string fname = "latest.txt";


void logt(std::string x) {
    std::ofstream lognow;
    lognow.open(fname, std::ios::out | std::ios::app | std::ios::ate);
    lognow << x << "\n";
    lognow.close();
}

void logg(std::string x) {
    
}