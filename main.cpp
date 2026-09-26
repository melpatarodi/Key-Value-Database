#inclue <iostream>
#include "database.h"
using namespace std;

int main() {
Database db;
db.load();

int choice;
bool quit = false;

while (!quit) {
  print("Key Value Database:\n");
  print("1. Set value\n");
  print("2. Get value\n");
  print("3. Delete value\n");
  print("4. Show all current values\n");
  print("5. Save database\n");
  print("6. Quit\n");
  print("Choose an option: ");
  cin >> choice;

  switch(choice) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    default:
      break;
  }
}
return 0;
}
