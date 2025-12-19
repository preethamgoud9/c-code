#include <iostream>

int main() {
    int array[5] = {1,2,2,3,4};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0;i < size;i++) {
        int count = 0;
        bool countedalready = false;
        for(int k = 0;k < i;k++) {
            if (array[k] == array[i]) {
                countedalready = true;
                break;
            }
        }
        if (countedalready) {
                continue;
            }
        for (int j = 0;j < size;j++) {
            if (array[i] == array[j]) {
                count = count + 1;
            } 
        }  
        std::cout << array[i] << ":" << count <<std::endl;
    }
    return 0;
}