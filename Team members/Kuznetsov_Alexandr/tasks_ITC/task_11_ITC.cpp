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

bool chack(int num_1, int num_2, int num_3, int chack_num_1, int chack_num_2, int chack_num_3)
{
    if((num_1==chack_num_1) || (num_1==chack_num_2) || (num_1==chack_num_3)) {
        return false;
    }
    if((num_2==chack_num_1) || (num_1==chack_num_2) || (num_1==chack_num_3)) {
        return false;
    }
    if((num_3==chack_num_1) || (num_1==chack_num_2) || (num_1==chack_num_3)) {
        return false;
    }
    return true;
}

int main()
{
    int counter = 0, num = 10000000;
    for(int i = 318216, conteiner_1 = 0, conteiner_2 = 0, conteiner_3 = 0; i <= 369453; i++) {
        for(int divider = 1; divider<=i; divider++) {
            if(prime_num_check(divider)!= 1) {
                for(int divider_nested = 1; divider_nested<=i; divider_nested++) {
                    if(prime_num_check(divider_nested)!= 1 ) {
                        for(int divider_nested_2 = 1; divider_nested_2<=i; divider_nested_2++) {
                            if(prime_num_check(divider_nested_2)!= 1) {
                                if(((divider*divider_nested*divider_nested_2) == i) && chack(divider, divider_nested, divider_nested_2, conteiner_1, conteiner_2, conteiner_3)) {
                                    conteiner_1 = divider;
                                    conteiner_2 = divider_nested;
                                    conteiner_3 = divider_nested_2;
                                    ++counter;
                                    if(num>i){
                                        num = i;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        conteiner_1=0;
        conteiner_2=0;
        conteiner_3=0;
    }
    cout << "quantity = " << counter << endl;
    cout << "min number = " << num << endl;
    return 0;
}
