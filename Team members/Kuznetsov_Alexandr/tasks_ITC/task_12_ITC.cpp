#include <iostream>

using namespace std;

int prime_num_check(int num)
{
    int devisor = 1, counter_devisors = 0;
    while (devisor <= num) {
        if (num % devisor == 0) {
            counter_devisors++;
        }
        devisor++;
    }
    if(counter_devisors == 2) {
        return 0;
    }
    return 1;
}

int main()
{
    const int SIZE = 3;
    for (int i = 106732567, devisor = 1, counter_devisors = 0, max_dev; i <= 152673836; i++) {
        while (devisor <= i) {
            if (i % devisor == 0 && prime_num_check(devisor) == 0) {
                counter_devisors++;
                max_dev = devisor;
            }
            devisor++;
        }
        if (counter_devisors == SIZE) {
            cout << "number " << i << " have " << SIZE << " non-trivial divisor" << endl;
            cout << "max divisor = " << max_dev << endl;
            cout << "***********************************************" << endl;
        }
        devisor = 1;
        counter_devisors = 0;
    }
}
