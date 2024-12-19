#include <iostream>
#include "process.h"

using namespace std;

void Process::planProcess()
{
    cout << "Planning process..." << endl;
    pnc_map.mapIn();
    cout << "Process planning complete!" << endl;
}