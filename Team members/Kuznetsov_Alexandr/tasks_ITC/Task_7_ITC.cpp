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
    for (int i = 2, devisor = 1, counter_devisors = 0, counter_num = 1; i <= 20000; i++) {
        while (devisor <= i) {
            if (i % devisor == 0 && prime_num_check(devisor) == 0) {
                counter_devisors++;
            }
            devisor++;
        }
        if (counter_devisors > SIZE) {
            cout << counter_num++ << ") Composite " << i << endl;
        }
        devisor = 1;
        counter_devisors = 0;
    }
    return 0;
}
