9-x/2=y, x=3 y = 3
9-x/2=y, x=5 y = 2
9-x/2=y, x=7 y = 1
9-x/2=y, x=9 y = 0

```cpp
int main(){
char ch = '&';
	for(int i = 3; i <= 9; i += 2){
		for(int j=0; j < i; j++){
			std::cout << ch;
		}
		std::cout << std::endl;
	}

}
```
