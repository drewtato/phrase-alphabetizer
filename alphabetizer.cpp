#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string in = "", s = "";
  char c;
  std::cout << "\nThing to be alphabetized, or \"exit\":\n\n";
  while(std::getline(std::cin, in))
  {
    s = "";
    if(in == "exit")
    {
      break;
    }
    for(int i = 0; i < in.length(); i++)
    {
      c = tolower(in[i]);
      // std::cout << c;
      if(c <= 'z' && c >= 'a')
      {
        s += c;
      }
    }
    
    std::sort(s.begin(), s.end());
    std::cout << s << "\n";
    
    std::cout << "--------------\n";
  }
}