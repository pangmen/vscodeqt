#include <iostream>
#include "show_result.h"
#include <graphics.h>

using namespace std;

void ShowResult::drawResult()
{
    initgraph(1000, 800);
    setbkcolor(WHITE);
    cleardevice();

    cout << "Hello World!" << endl;
    setlinecolor(RED);
    setlinestyle(PS_SOLID, 1);
    circle(500, 400, 50);

    system("pause");
    closegraph();
}
