#include <iostream>
#include <math.h>
using namespace std;

int main(){
	for (int x=1; x<=100; x++){

		cout << x << ": ";

		if ((x % 15) == 0){
			cout << "FizzBuzz" << endl;
		}else if((x % 3) == 0){
			cout << "Fizz" << endl;
		}else if((x % 5) == 0){
			cout << "Buzz" << endl;
		}else{
			cout << "no fizz, no buzz" << endl;
		}
	}
	return 0;
}
  
