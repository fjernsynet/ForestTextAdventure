#include <iostream>

int main(){
  char choice1;
  char choice2;
  char choice3;
  bool isInjured = false;
  bool aquiredFlower = false;
  bool aquiredStone = false;

  std::cout << "You walked into a forest for your weekend walk.\n";
  std::cout << "Just a few minutes into the walk, you lose track of where you came from. The path in front of you branches to three seperate paths.\n\nThe leftmost path is full of tall bushes and low trees. The middle path has tall trees and goes up a hill. The rightmost path has a rocky terrain and trees with many broken branches.\n\n";
  for(int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++){
    if(i > 0){
      std::cout << "Not a valid input. Type 'A', 'B' or 'C'. \nCase sensitive!\n";
    }
    std::cout << "Which way do you choose?\n";
    std::cout << "A) The leftmost path\n";
    std::cout << "B) The middle path\n";
    std::cout << "C) The rightmost path\n";
    std::cin >> choice1;
  }
 
  switch(choice1){
    case 'A':
    std::cout << "You walk to the leftmost path. After walking a while, the bushes and low trees completely cover the sky above you, making the path very dark.\n";
    std::cout << "You stumble and lose your balance. A branch scratches you during the fall and your foot is now injured.\n";
    isInjured = true;
      break;
    case 'B':
    std::cout << "You walk the middle path. After heading up the hill for a while, you see a clearing further down the road.\n In the clearing, there is a tall boulder with something small and shiny on top. \n";
      break;
    case 'C':
    std::cout << "You walk the rightmost path. The path is filled with rocks so it's easy to stumble. Luckily, it is daytime so you can see where you're walking.\n";
      break;
    default:
      std::cout << "Sorry, you haven't entered a valid choice.\n";
      std::cout << "Goodbye.\n";
      return 0;
  } 

  std::cout << "\nYou continue walking.\nFurther down the road, you eventually come to a clearing, with a large boulder engraved with a rose. There are flowers that you've never seen before, blooming around the boulder.\n";
  std::cout << "There is also a small patch of leaves on the ground that look very inviting.\n";
  std::cout << "What do you do?\n";
  
  for(int i = 0;i < 3 && choice2 != 'A' && choice2 != 'B' && choice2 != 'C' ;i++){
    if(i > 0){
      std::cout << "Not a valid input. Type 'A', 'B' or 'C'. \nCase sensitive!\n";
    }
    std::cout << "A) Lay down on the patch of leaves for a nap\n";
    std::cout << "B) Try to push the big boulder\n";
    std::cout << "C) Try to find the rose depicted on the boulder\n";
    std::cin >> choice2;
  }

  switch(choice2){
    case 'A':
      std::cout << "You feel tired so you want to take a nap on the leaves. \nAs you begin to lay down, you fall into the hole that was previously covered by the leaves. After trying, you find it impossible to climb out. \nNo one will find you in time...\n\nGAME OVER!\n";
      return 0;
    break;
    case 'B':
      std::cout << "You repeatedly push the big boulder.\nAfter a while, something falls off the boulder. As you get closer, you see that it's a green gemstone. You pick it up.\n";
      aquiredStone = true;
      break;
    case 'C':
      std::cout << "After looking at the seemingly hundreds of flowers around, you finally find the rose depicted on the stone. It has a slight glow.\n";
      aquiredFlower = true;
      break;
    default:
      std::cout << "Sorry, you haven't entered a valid choice.\n";
      std::cout << "Goodbye.\n";
      return 0;
  }
std::cout << "\nYou continue walking. After what seems like hours, the road keeps twisting and turning more and more. You start to lose track of where you came from and where you want to go.\n";
if(isInjured == true){
  if(aquiredFlower == true){
    std::cout << "Your foot is still badly hurt and you can barely walk anymore.\nAs a last ditch effort, you smear the flower you picked up on the wound.\nIt magically fixed your foot! You can now continue walking.\n";
    isInjured = false;
    } else if (aquiredFlower != true){
      std::cout << "Your foot is still badly hurt. The foot aches more and more, and you find yourself unable to continue walking. After sitting for a while, you are unable to stand up again and eventually starve to death. \n\nGAME OVER!\n";
      return 0;
    }
  }
  std::cout << "\nAs you continue walking, you see a squirrel on a broken branch. \nThe squirrel says: 'I cannot allow you to pass unless you guess my favorite nut.'\n'Is it hazelnut, peanut, almond or walnut?'\n";
  for(int i = 0;i < 3 && choice3 != 'A' && choice3 != 'B' && choice3 != 'C' && choice3 != 'D'; i++){
    if(i > 0){
      std::cout << "Not a valid input. Type 'A', 'B', 'C' or 'D'. \nCase sensitive!\n";
    }
    std::cout << "A) Hazelnut\n";
    std::cout << "B) Walnut\n";
    std::cout << "C) Almond\n";
    std::cout << "D) Peanut\n";
    std::cin >> choice3;
  }
  switch(choice3){
    case 'A':
      std::cout << "'Wrong!'\n";
      if(aquiredStone == true){
      std::cout << "'But give me that gemstone and I'll let you pass.'\nYou give him the gemstone.\n";
      } else {
        std::cout << "The squirrel calls on his squirrel friend and they gnaw on you until you die.\n\nGAME OVER!\n";
        return 0;
      }
      break;
    case 'B':
      std::cout << "'Correct! I'll let you pass.'\n";
      break;
    case 'C':
      std::cout << "'Wrong!'\n";
      if(aquiredStone == true){
      std::cout << "'But give me that gemstone and I'll let you pass.'\nYou give him the gemstone.\n";
      } else {
        std::cout << "The squirrel calls on his squirrel friend and they gnaw on you until you die.\n\nGAME OVER!\n";
        return 0;
      }
      break;
    case 'D':
      std::cout << "'Wrong!'\n";
      if(aquiredStone == true){
      std::cout << "'But give me that gemstone and I'll let you pass.'\nYou give him the gemstone.\n";
      } else {
        std::cout << "The squirrel calls on his squirrel friend and they gnaw on you until you die.\n\nGAME OVER!\n";
        return 0;
      }
      break;
    default:
      std::cout << "Sorry, you haven't entered a valid choice.\n";
      std::cout << "Goodbye.\n";
      return 0;
    }
std::cout << "You continue walking. As you keep walking, you finally found the exit! \n\nVICTORY!";
return 0; 

}