#include <iostream>
#include <string>
#include "hw3.h"

int main() {
  //Test ReverseArray();

    std::cout << DogishHelper("gadgdks",'d') << std::endl;
  int arr[] = { 1, 2, 3, 4, 5 };

  int n = sizeof(arr)/sizeof(arr[0]);
  std::cout << n << "hello?"<< std::endl;
  ReverseArray(arr,n);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

//Test HasBalancedParentheses();
 std::string statement1 = "((())())";
 if(HasBalancedParentheses(statement1)){
   	std::cout << "Is it Balanced " << std::endl;
 }
 else {
   std::cout<< "not balanced" << std::endl;
 }
// Test InDogish();


 std::string mydogs = "dpoags";
 if( InDogish(mydogs) ){
   	std::cout << "Part of Dogish? " << std::endl;
 }

 // Test bool InXish(sting mytext, sting myword);

return 0;
}


