#include<iostream>


void test(int n)
{
  std::cout<<n<<std::endl;
  test(n+1);
  return  ;
}

int main()
{
  test(0);
}