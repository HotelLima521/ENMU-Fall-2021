#include <iostream>

char userIn(){
	char ui;
	std::cout << "Enter the row you'd like to check the highest number on:\n1st Row = 1\n2nd Row = 2\n3rd Row = 3" << std::endl;
	std::cin >> ui;

	return ui;
}

int main(){
	bool menu = true;
	char ui;
	int x = 3;
	int y = 4;
	int row;
	int column;
	int Values[x][y] = {
		{80, 90, 85, 55},
		{75, 85, 80, 60},
		{90, 95, 90, 60}
	};
	
	while(menu){
		menu = false;
		ui = userIn();
		switch(ui){
			case '1':
				row = 0;
				break;
			case '2':
				row = 1;
				break;
			case '3':
				row = 2;
				break;
			default:
				std::cout << "Incorrect Input, returning...";
				menu = true;
		}
	}

	int largest = Values[row][column];
	
	for(int i = 1; i < 4; i++){
		if(largest < Values[row][i]){
			largest = Values[row][i];
		}
	}
	
	std::cout << "The largest element at the second row is: " << largest << std::endl;
		
	return 0;
}
