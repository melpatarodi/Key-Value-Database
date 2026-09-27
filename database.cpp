#include "database.h"
#include <iostream>
#include <fstream>
using namespace std;

      void Database::set(string key, string value){
            data[key] = value;
            cout << value << " has been stored in " << key;
      }

      string Database::get(string key){
            if (data.find(key) == data.end()) {
                  return "ERROR:The key cannot be found.";
            }
            return data[key];
      }

      void Database::remove(string key){
            if (data.find(key) == data.end()) {
                  cout << "ERROR:The key cannot be found.";
                  return;
            }
            data.erase(key);
            cout << "The key has been deleted.";
      }

      void Database::save(){
            ofstream file("database.txt");

            if (!file) {
                  cout << "ERROR:The database file could not be accessed.";
                  return;
            }
            for (auto item : data) {
                  file << item.first << " -> " << item.second << endl;
            }
            file.close();
            cout << "The database has been saved.";
      }
      void Database::load(){
            ifstream file("database.txt");
                string key;
                string value;
            if (!file) {
                  cout << "ERROR:The database file could not be accessed.";
                  return;
            }

            while (file >> key >> value) {
                  data[key] = value;
            }
            file.close();
      }
      void Database::show(){
            if (data.empty()) {
                  cout << "The database is empty.";
                  return;
            }
            for (auto item : data) {
                  cout << item.first << " -> " << item.second << endl;
            }
      }
