

#include <iostream>

int linearSearch(int arr[],int size) {
    int min = arr[0];
    for (int i = 1;i<size;i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr1[5] = {90,21,22,42,29};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << linearSearch(arr1,size) << std::endl;
    return 0;
}