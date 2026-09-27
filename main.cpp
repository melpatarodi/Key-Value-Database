#include <iostream>
#include <cstdio>
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
  printf("Key Value Database:\n");
  printf("1. Set value\n");
  printf("2. Get value\n");
  printf("3. Delete value\n");
  printf("4. Show all current values\n");
  printf("5. Save database\n");
  printf("6. Quit\n");
  printf("Choose an option: ");
  cin >> choice;

  switch(choice) {
    case 1:
      cout << "Enter the key: ";
      cin >> key;
      cout << "Enter the value: ";
      cin >> value;

      db.set(key, value);
      cout << endl << endl;
      break;

    case 2:
      cout << "Enter the key: ";
      cin >> key;

      cout << "Value: " << db.get(key) << endl << endl;
      break;

    case 3:
      cout << "Enter the key: ";
      cin >> key;

      db.remove(key);
      cout << endl << endl;
      break;

    case 4:
      db.show();
      cout << endl << endl;
      break;

    case 5:
      db.save();
      cout << endl << endl;
      break;

    case 6:
      cout << "The session has been concluded." << endl;
      db.save();
      cout << endl;
      quit = true;
      break;

    default:
      cout << "Invalid choice, try again." << endl << endl;
      break;
    }
  }
return 0;
}
