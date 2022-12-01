/*
Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

Use conditionals to return the proper message:

case	return
name equals owner	'Hello boss'
otherwise	'Hello guest'
*/

#include <string>

std::string greet(const std::string& name, const std::string& owner) {
  if (!name.compare(owner))
    return "Hello boss";
  else
    return "Hello guest";
}

/* BEST

#include <string>

std::string greet(const std::string& name, const std::string& owner) {
  return name == owner ? "Hello boss" : "Hello guest";
}
*/
