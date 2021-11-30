#include<iostream>

using namespace std;
int adiff (int num1 , int num2){
  int c;
   if (num1 > num2  )
   {
     c = num1-num2;
   }else 
    {
     c = num2-num1;
    }while (c > 180)
    {
     c -= 360;
    }
      if (c <0)
        {
            c = -c;
        } 
  return c;
}


int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244);
}
