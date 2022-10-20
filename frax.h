#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

#define Logt(x) std::logt(text,filename);
#define log(x) std::logg(text);
#define pi 3.14159265359;


std::string fname = "latest.txt";


void logt(std::string text, std::string filename) {
    std::ofstream lognow;
    fname = filename;
    lognow.open(fname, std::ios::out | std::ios::app | std::ios::ate);
    lognow << text << "\n";
    lognow.close();
}

void logg(std::string text) {
    std::cout << text << "\n";
}