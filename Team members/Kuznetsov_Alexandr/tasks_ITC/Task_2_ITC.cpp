#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 4;
    int devisors_arr[SIZE]{};
    for (int i = 190201, devisor = 2, counter = 0; i <= 190280; i++) {
        while (devisor <= i) {
            if (i % devisor == 0) {
                if (counter < SIZE) {
                    devisors_arr[counter] = devisor;
                }
                counter++;
            }
            devisor+=2;
        }
        if (counter == SIZE) {
            for (int j = SIZE-1; j >= 0; j--) {
                cout << "number " << i << " dividet by " << devisors_arr[j] << " without residue" << endl;
            }
            cout << endl;
            cout << "*********************************" << endl;
            cout << endl;
        }
        devisor = 2;
        counter = 0;
    }
    return 0;
}
