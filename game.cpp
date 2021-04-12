#include <iostream>
#include <string>
bool game(int level)
{
    //veriable declaration
    int a = 0;
    int b = 0;
    int c = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    a = rand()%10 + level;
    b = rand()%10 + level;
    c = rand()%10 + level;
    //mathamatical operation
    int sum = a + b + c;
    int prod = a*b*c;
    std::cout<<"Welcom to level :"<<level<<std::endl;
    std::cout<<"Enter 3 numbers whose sum is :"<<sum<<"and product is :"<<prod<<"\n";
    std::cin>>num1;
    std::cin>>num2;
    std::cin>>num3;
    if(num1+num2+num3==sum && num1*num2*num3==prod)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int level=1;
    std::cout<<"welcome to level: " << level;
    //Display initial message
    std::cout<<"You are the secret agent"<<std::endl<<"Find out the secret code to enter mainframe of system"<<std::endl;
    std::cout<< std::endl;
    for(int i=0;i<10;i++)
    {
        bool result=game(level);
        std::cin.clear();
        std::cin.ignore();
        if (result)
        {
            std::cout<<"You succesfully cleared level: "<<level<<"\n";
            level+=1;
        }
        else{
            std::cout<<"You failed to clear level: "<<level<<"\n Try again later";
            break;
        }
    }
    if(level==10)
        std::cout<<"You have successfully cleared all levels\ncongractulations!!!";
    return 0;
}
