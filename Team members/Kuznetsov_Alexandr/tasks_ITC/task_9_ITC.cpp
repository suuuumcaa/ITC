#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 3;
    int devisors_arr[SIZE]{};
    for (int i = 81234, devisor = 1, counter = 0; i <= 134689; i++) {
        while (devisor <= i) {
            if (i % devisor == 0 && devisor!=1 && devisor!=i) {
                if (counter < SIZE) {
                    devisors_arr[counter] = devisor;
                }
                counter++;
            }
            devisor++;
        }
        if (counter == SIZE) {
            cout << endl;
            cout << "number " << i << " dividet by: " << endl;
            cout << "min divider = " << devisors_arr[0] << ", max divider = " << devisors_arr[2] << endl;
        }
        devisor = 1;
        counter = 0;
    }
    return 0;
}
