#include "Element.h"
  
 -Element::Element(std::string name):_name(name), _next(NULL)
 +Element::Element(std::string name,  std::string author, std::string publisher, std::string date, std::string category):_name(name), _author(author), _publisher(publisher), _date(date), _category(category), _next(NULL
  {
  }