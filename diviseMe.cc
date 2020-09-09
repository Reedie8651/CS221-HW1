#include <iostream>


int main(void) {

  int num;
  std::string s = "The divisors of "+std::to_string(num)+" are ";
  std::cout << "Gimme a number!";
  std::cin >> num;

  if(num<1){
    std::cout << "Bad number!";
  }
  if(num==1){
    std::cout << "The divisor of 1 is 1, you atonal apple.";
  }

  for(int i=1; i<num;i++){
    if(num%i==0){
      s = s+std::to_string(i)+", ";
    }
  }
  s = "and "+s+std::to_string(num)+". ";
  std::cout << s;

  return 0;
}
