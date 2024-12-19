#include <iostream>
#include "process.h"
#include <Eigen/Dense>

using namespace std;
using Eigen::MatrixXd;

void Process::planProcess()
{
    cout << "Planning process..." << endl;
    pnc_map.mapIn();

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(0,0) + m(1,0);

    cout << m << endl;
    cout << "Process planning complete!" << endl;
}