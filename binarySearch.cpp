#include <iostream>

int binarySearch(int arr[],int size,int target) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

 int main() {
    int arr[] = {1,2,3,10,20,30,400,5000,9000,10000,12000,13000,14000};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << binarySearch(arr,size,13000) << std::endl;
    return 0;
}