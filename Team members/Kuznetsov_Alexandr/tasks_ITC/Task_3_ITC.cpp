#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int devisors_arr[SIZE]{};
    for (int i = 125873, devisor = 1, counter = 0; i <= 136762; i++) {
        while (devisor <= i) {
            if (i % devisor == 0) {
                if (counter < SIZE) {
                    devisors_arr[counter] = devisor;
                }
                counter++;
            }
            devisor++;
        }
        if (counter == SIZE) {
            for (int j = 0; j < SIZE; j++) {
                cout << "number " << i << " dividet by " << devisors_arr[j] << " without residue" << endl;
            }
            cout << endl;
            cout << "*********************************" << endl;
            cout << endl;
        }
        devisor = 1;
        counter = 0;
    }
    return 0;
}
