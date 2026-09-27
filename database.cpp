#include "database.h"
#include <iostream>
#include <fstream>
using namespace std;

      void Database::set(string key, string value){
            data[key] = value;
            cout << value << " has been stored in " << key << endl;
      }

      string Database::get(string key){
            if (data.find(key) == data.end()) {
                  return "The key cannot be found.";
            }
            return data[key];
      }

      void Database::remove(string key){
            if (data.find(key) == data.end()) {
                  return "The key cannot be found.";
            }
            data.erase(key);
            return "The key was deleted.";
      }

      void Database::save(){

      }
      void Database::load(){

      }
      void Database::show(){

      }
