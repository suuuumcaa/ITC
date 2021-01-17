#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 2;
    for (int i = 1371085, devisor = 1, counter_devisors = 0, counter_num = 1; i <= 1371134; i++) {
        while (devisor <= i) {
            if (i % devisor == 0) {
                counter_devisors++;
            }
            devisor++;
        }
        if (counter_devisors == SIZE) {
            cout << counter_num++ << ") Prime " << i << endl;
        }
        devisor = 1;
        counter_devisors = 0;
    }
    return 0;
}
