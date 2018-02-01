//Authors: 
#include <iostream>
#include <string>

int main()
{
std::string name;
int age;
double time;
std::string animal;
std::string motion;

std::cout<<"Name\n";
std::cin>> name;
std::cout<<"Age (1-10)\n";
std::cin>> age;
std::cout<<"Time\n";
std::cin>> time;
std::cout<<"Animal\n";
std::cin>> animal;
std::cout<<"Motion\n";
std::cin>> motion;

std::cout<<"There was a kid named "<<name<<" who was "<<age<<" years old.\n";
std::cout<<"Everytime he slept his dreams came true.\n";
std::cout<<"This one night at "<<time<<" he dreamed about "<<animal<<"\n";
std::cout<<"and they "<<motion<<" around his room.\n";

  return 0;
}
