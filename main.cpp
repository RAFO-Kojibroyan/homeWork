#include<iostream>
#include<map>
int sum(int a , int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if(b == 0)
    {
        return 0;
    }
       return a / b;

}

int main()
{
    std::map<char, int (*)(int, int)> ops;
ops['+'] = &sum;
ops['-'] = &sub;
ops['*'] = &mul;
ops['/'] = &div;
int a, b;
char ch;
std::cin>>a>>ch>>b;
std::cout<<ops[ch](a,b)<<std::endl;
}