#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include <unordered_map>
using namespace std;

class Database {
  private:
      unordered_map<string, string> data;
  public:
      void set(string key, string value);
      string get(string key);
      void remove(string key);
      void save();
      void load();
      void show();
};

#endif
