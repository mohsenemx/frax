/*
// CPP program to print current date and time
// using time and ctime.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main()
{
    // declaring argument of time()
    time_t my_time = time(NULL);
  
    // ctime() used to give the present time
    printf("%s", ctime(&my_time));
    return 0;
}

*/

// CPP program to print current date and time
// using chronos.
#include <chrono>
#include <ctime>
#include <iostream>
  
using namespace std;
  
int main()
{
    // Here system_clock is wall clock time from
    // the system-wide realtime clock
    auto timenow =
      chrono::system_clock::to_time_t(chrono::system_clock::now());
  
    cout << ctime(&timenow) << endl;
}