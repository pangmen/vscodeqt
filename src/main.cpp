#include <iostream>
#include "process.h"
#include "show_result.h"
using namespace std;

int main()
{
    cout << "Processing started" << endl;
    Process process;
    process.planProcess();
    cout << "Processing complete" << endl;

    ShowResult show_result;
    show_result.drawResult();
    return 0;
}
