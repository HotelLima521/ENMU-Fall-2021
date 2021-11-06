#include <iostream>
int main(){    
char ch = '&';
char ws = ' ';
        for(int i = 3; i <= 9; i += 2){
		for(int k = 0; k <= 9-i/2; k++){
			std::cout << ws;
		}

                for(int j=0; j < i; j++){    
                        std::cout << ch;    
        	}
                std::cout << std::endl;    
        }    
       
}
