#inclue <iostream>
#include "database.h"
using namespace std;

int main() {
Database db;
db.load();

int choice;
bool quit = false;
string key;
string value;

while (!quit) {
  print("\n");
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
      cout << "Enter the key: ";
      cin >> key;
      cout << "Enter the value: ";
      cin >> value;
      
      db.set(key, value);
      break;
    
    case 2:
      cout << "Enter the key: ";
      cin >> key;

      cout << "Value: " << db.get(key) << endl;
      break;
    
    case 3:
      cout << "Enter the key: ";
      cin >> key;

      db.remove(key);
      break;
    
    case 4:
      break;
    
    case 5:
      break;
    
    case 6:
      break;
    
    default:
      cout << "Invalid choice, try again." << endl;
      break;
    }
  }
return 0;
}
