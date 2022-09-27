#include <iostream>
#include <string>

int main() {
    std::string surname[10];
    for (int i=0; i<10; ++i) {
        std::cin>>surname[i];
    }

    for (int i=0; i<3; ++i) {
        std::cout<<"\nNumber flat?\n";
        int number;
        std::cin>>number;
        if (number<11)
            std::cout<<"\n In apartment number "<<number<<" lives "<<surname[number-1];
        else std::cout<<"Error!";
    }
}
