#pragma once

#include <string>

class Person {
 public:
  Person(const std::string& o_name, int i_age);
  std::string getName() const;
  void setName(const std::string& o_name);
  int getAge() const;
  void setAge(int i_age);

 private:
  std::string _m_name;
  int _m_age;
};