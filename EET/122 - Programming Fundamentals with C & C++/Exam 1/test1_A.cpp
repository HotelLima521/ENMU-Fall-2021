#include <iostream>

int main(){    
    
        int userIn;    
        std::cout << "Please enter a temperature (F)\n-> ";    
        std::cin >> userIn;    
    
        if(userIn > 100){    
                std::cout << "High temperature" << std::endl;    
        }    
        else if(userIn > 70){    
                std::cout << "Moderate temperature" << std::endl;    
        }    
        else{    
                std::cout << "Low temperature" << std::endl;    
        }    
    
        return 0;    
}    

