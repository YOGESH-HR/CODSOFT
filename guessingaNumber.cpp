#include <iostream>
#include <cstdlib>
#include<ctime>

int main(){
     std::srand(std::time(0)); 
    int randomNumber = std::rand()%rand()% 100+1;

    int guess;

    std::cout << "Guess the number between 1 and 100: ";
    do {  
        std::cin >>guess;
    if (guess > randomNumber){ 
        std::cout<<" too high! Try again:";
    }else if (guess < randomNumber)
    std::cout<<"Too low! try again:";
    else{
     std::cout<<"congratulation! You guessed the correct number."<<std::endl;
    } 
    }while ( guess!= randomNumber);

    return 0;   
    }