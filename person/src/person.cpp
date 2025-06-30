#include "person.hpp"

Person::Person(const std::string& o_name, int i_age)
    : _m_name{o_name}, _m_age{i_age} {}

std::string Person::getName() const {
  return _m_name;
}

void Person::setName(const std::string& o_name) {
  _m_name = o_name;
}

int Person::getAge() const {

  return _m_age;
}

void Person::setAge(int i_age) {
  _m_age = i_age;
}