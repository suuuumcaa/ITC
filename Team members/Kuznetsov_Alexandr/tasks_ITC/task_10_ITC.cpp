#include <iostream>
#include <cmath>

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
    int counter = 0, num = 0, sum = 0;
    for(int i = 238941, check_num = 0, conteiner = 0 ; i <= 315675; i++) {
        for(int divider = 1; divider<=i; divider++) {
            if(prime_num_check(divider)!= 1) {
                for(int divider_nested = 1; divider_nested<=i; divider_nested++) {
                    if(prime_num_check(divider_nested)!= 1) {
                        if((i == (divider * divider_nested)) && (divider!=conteiner)) {
                            conteiner = divider_nested;
                            ++counter;
                            if(abs(divider_nested - divider)> sum) {
                                sum = abs(divider - divider_nested);
                                num = i;
                            }
                        }
                    }
                }
            }
        }
        conteiner=0;
    }
    cout << "quantity = " << counter << endl;
    cout << "number " << num << " have the greatest sum = " << sum << endl;
    return 0;
}
