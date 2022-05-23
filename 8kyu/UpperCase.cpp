/*
Write a function which converts the input string to uppercase.
*/

#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string str = input_str;
  for (int i = 0; i < (int)str.length(); i++){
    str[i] = toupper(str[i]);
  }
  return str;
}
