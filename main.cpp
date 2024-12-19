#include <iostream>
#include "process.h"
using namespace std;

int main()
{
    cout << "Processing started" << endl;
    Process process;
    process.planProcess();
    cout << "Processing complete" << endl;
    return 0;
}
