#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 2;
    for (int i = 194441, devisor = 1, counter_devisors = 0, counter_num = 1; i <= 196500; i++) {
        while (devisor <= i) {
            if (i % devisor == 0) {
                counter_devisors++;
            }
            devisor++;
        }
        if (counter_devisors == SIZE && i%100==93) {
            cout << counter_num++ << ") Prime " << i << endl;
        }
        devisor = 1;
        counter_devisors = 0;
    }
    return 0;
}
