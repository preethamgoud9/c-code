#include <iostream> 
#include <vector>
using namespace std;


int main() {
    int arr[5] = {1,72,12,32,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxValue = arr[0];
    for (int i = 1;i<size;i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    vector<int> arr2(maxValue + 1,0);
    for (int j =0;j<size;j++) {
         int value = arr[j];
         arr2[value]++;
    }
    for (int k = 0;k<=maxValue;k++) {
        if (arr2[k] > 0) {
        cout << k << ':' << arr2[k] << endl;
        }
    }
    return 0;
}