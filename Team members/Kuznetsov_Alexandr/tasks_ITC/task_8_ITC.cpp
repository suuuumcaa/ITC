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
    int max_dev = 0;
    for (int i = 2, devisor = 1, counter_devisors = 0; i <= 10000000; i++) {
        while (devisor <= i) {
            if (i % devisor == 0 && prime_num_check(devisor) == 0) {
                counter_devisors++;
            }
            devisor++;
        }
        if (counter_devisors > max_dev) {
            max_dev = counter_devisors;
        }
        devisor = 1;
        counter_devisors = 0;
    }
    for (int i = 2, devisor = 1, counter_devisors = 0; i <= 10000000; i++) {
        while (devisor <= i) {
            if (i % devisor == 0 && prime_num_check(devisor) == 0) {
                counter_devisors++;
            }
            devisor++;
        }
        if (counter_devisors == max_dev) {
            cout << "Number = " << i << ", number of prime divisors = " << max_dev << endl;
            return 0;
        }
        devisor = 1;
        counter_devisors = 0;
    }
}