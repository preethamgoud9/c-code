
#include <iostream> 
 
int linear(int arr[],int size,int target) {
    
    for (int i = 0;i <size;i++) {
        if (arr[i] == target) {
            return i;
        }        
    }
    return -1;

}
int main() {
    int arr1[10] = {1,2,156,12,50,13,21,41,42,79};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    std::cout<< linear(arr1,size,21) << std::endl;
    return 0;
}