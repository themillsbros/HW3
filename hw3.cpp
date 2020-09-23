/****
* PSEUDOCODE:
Reverse Array: set temp variable
run for loop to swap array values for length/2.
length only required due to library restriction.
*
HasBalancedParentheses: delcare counters, test for even amount,
test end conditions

DogisHelper: take word and letter, check if empty, check if first letter matches next letter in key, shrink word until first letter equals key or empty
InDogish:Use helper, if found pass chopped string to next key. If not return false

InXish: check empty key, get first letter of key, check if key exists,
pass chopped string starting at first occurence of key and pass next letter of key. repeat.
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
  }
  else {
 return DogishHelper(word.substr(1,word.length()), letter);
  }

}
bool InDogish(std::string word){

  if (DogishHelper(word, 'd')){
    std::string hold = word.substr(word.find('d',0), word.length());

    if (DogishHelper(hold, 'o')){
      hold = hold.substr(hold.find('o',0), hold.length());

      if(DogishHelper(hold, 'g')){
        return 1;
      }

    }
  }
return 0;
}

bool InXish(std::string word, std::string lang){
  if(lang.length()==0){
    return 1;
  }

  char lang_index = lang[0];

  if (!DogishHelper(word, lang_index)){
    return 0;
  }

  return InXish(word.substr(word.find(lang_index), word.length()), lang.substr(1,lang.length()));
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