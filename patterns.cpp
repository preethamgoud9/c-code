/* #include <iostream>

int main() {
    int n;
    std::cout <<"enter the value of n"<<std::endl;
    std::cin >>n;
    for (int i=0;i<n;i++) {
        for (int j =0;j<=n-1;j++) {
            std::cout<< "*. ";
        }
        std::cout << "" <<std::endl;
    }
        return 0;
}
*/
/*
#include <iostream>

int main() {
    int n;
    std::cout << "enter the value of n" << std::endl;
    std::cin >> n;
    for (int i =1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            std::cout << "*";
        }
        std::cout << "" <<std::endl;
    }
    return 0;
}
*/
/*
#include <iostream>

int main() {
    int n;
    std::cout << "enter the value of n" <<std::endl;
    std::cin >>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
        std::cout << j;
        }
        std::cout<<""<<std::endl;
    }
    return 0;
}
*/
/*
#include <iostream> 
int main() {
    int n;
    std::cout << "enter the value of n" << std::endl;
    std::cin >>n;
    for (int i=1;i<=n;i++) {
        for (int j =1;j<=i;j++) {
            std::cout << i << " ";
        }
        std::cout << "" << std::endl;
    }
    return 0;
}
*/
/*
#include <iostream>

int main() {
    int n;
    std::cout<< "enter the value of n" << std::endl;
    std::cin >> n;
    for (int i = n;i>=1;i--) {
        for ( int j =i;j>=1;j--) {
            std::cout << "*";
        }
        std::cout<< "" <<std::endl;
    }

    return 0;

}
*/
/*
#include <iostream> 
int main() {
    int n;
    std::cout << "Enter the value of n" << std::endl;
    std::cin >> n;
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=n-i+1;j++) {
            std::cout << j << " ";
        }
        std::cout << "" << std::endl;    
    }
}
*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n" <<std::endl;
    std::cin >>n;
    for (int i = 0;i <n;i++) {
        int stars = 2*i+1;
        int spaces = n-i-1;
        for (int j=0;j<spaces;j++) {
            std::cout << " ";
        }
        for (int j=0;j<stars;j++) {
            std::cout << "*";
        }

        for (int j=0;j<spaces;j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}