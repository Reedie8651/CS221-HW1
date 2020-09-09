#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

int main() {

  srand(time(0));

  int number = (rand() % 100) + 1;

  std::cout << "I've chosen a number from 1 to 100. ";
  std::cout << "Try to guess what it is.\n";

  int guess;
  int attempts = 0;
  bool success = false;

  while (attempts < 6) {
    std::cin >> guess;
    if (guess < number) {
      std::cout << "That's too low. Try again.\n";
    } else if (guess > number) {
      std::cout << "That's too high. Try again.\n";
    } else {
      success = true;
    }
    if(success){
      std::cout << "Well done! ";
      std::cout << number << " was the number I chose.\n";
    }
    else{
      attempts++;
    }    
  }

  if(attempts==6){
      std::cout << "Too slow! ";
      std::cout << number << " was the number I chose.\n";
  }

  return 0;
}
