#include "Output.hpp"

void outputF(figure* circle, int k)
{
    for (int j = 0; j < k; j++) {
        circle[j].output();
        cout << "\tPerimetr = " << 2 * Pi * circle[j].r << endl << "\tArea = " << Pi * circle[j].r * circle[j].r << endl;
    }
}
