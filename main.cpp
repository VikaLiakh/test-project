#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{

std::string hoduser;
int hodcomp;
int zmina;

std::cout<<"Enter Rock,Scissors or Paper "<<std::endl;
std::cin>>hoduser;

if(hoduser=="Rock")
zmina=1;

if(hoduser=="Scissors"){
zmina=3;
}
else{
zmina=2;
}

srand(time(0));
hodcomp=1+rand()%3;
if(zmina==hodcomp)
{
std::cout<<"Nichya"<<std::endl;

return 0;}

if(hodcomp==3 && zmina==1)
std::cout<<"You win!"<<std::endl;

if(hodcomp==1 && zmina==2)
std::cout<<"You win!"<<std::endl;

if(hodcomp==2 && zmina==3)
std::cout<<"You win!"<<std::endl;

if(hodcomp==2 && zmina==1)
std::cout<<"Looser!"<<std::endl;

if(hodcomp==3 && zmina==2)
std::cout<<"Looser!"<<std::endl;

if(hodcomp==1 && zmina==3)
std::cout<<"Looser!"<<std::endl;
}

