 #include <iostream>
int main() {
    float x;
    float y;
    char run = 'y';
    char operation;
    while (run == 'y' ||run == 'Y') {
    std::cout << "Welcome To Calculator" << std::endl;
    std::cout << "enter the x value" <<std::endl;
    std::cin >> x;
    std::cout << "which operation do u wanna perform" << std::endl;
    std::cin >> operation;
    std::cout << "enter the y value" <<std::endl;
    std::cin >> y;
        if (operation == '+') {
        std::cout << x + y << std::endl;
    }
    else if (operation == '-') {
        std::cout << x - y << std::endl;
    }
    else if(operation == '*') {
        std::cout << x * y << std::endl;
    }
    else if (operation == '/') {
        if (y != 0) {
            std::cout << x/y << std::endl;
        }
        else {
            std::cout << "y is zero" << std::endl;
        }
    } else {
        std::cout << "operation not supported" << std::endl;
    }
    std:: cout << "do u want to continue using the calculator"<<std::endl;
    std:: cin >> run;

    }
    return 0;
}
