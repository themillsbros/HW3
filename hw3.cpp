/****
* PSEUDOCODE:
Reverse Array: set temp variable
run for loop to swap array values for length/2.
length only required due to library restriction.
*
HasBalancedParentheses: delcare counters, test for even amount,
test end conditions
*/
#include <string>
#include <iostream>

bool DogishHelper( std::string word, char letter){
 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;
 if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
    return 1;
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}
bool InDogsh(std::string string){

  if (DogishHelper(string, 'd')){
    std::string hold = string.substr(string.find('d'));

    if (DogishHelper(hold, 'o')){
      hold = hold.substr(string.find('o'));

      if(DogishHelper(hold, 'g')){
        return 1;
      }

    }
  }
return 0;
}

void ReverseArray(int arr[], int length){

int hold;

for (int i = 0; i < length/2; i++){
    hold = arr[i];
    arr[i] = arr[length-(1+i)];
    arr[length-(1+i)] = hold;
} 

  return ;

}

bool HasBalancedParentheses(std::string string){

  int cntopen = 0;
  int cntclose= 0;

  if(string.length()%2 == 1){
    return 0;
  }

  if (string[0] == ')' || string[string.length()-1]=='('){
     return 0;
  }

  for(int i = 0; i < string.length(); i++){
    if (string[i] == '('){
      cntopen++;
    }
    if(string[i] == ')'){
      cntclose++;
    }
  }
  if (cntopen == cntclose){
    return 1;
  }
  else{
    return 0;
  }
}