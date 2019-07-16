#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
 
 if (argc > 2){
 cout << "\nDont Draw Cake \n";
 return 0; 
 }
 
 if (strlen(argv[1]) > 15){

 cout << "\nPlease ENter Charachter In Range 1 To 10\n";
 return 0; 
 } 
cout<<"     *        *        *\n    ***      ***      ***"<<endl;
    for (int x=0; x<3; x++)
    {
    cout<<"    |-|      |-|      |-|"<<endl;
}
    cout<<"____|-|______|-|______|-|___"<<endl;
    cout<<"|==========================|"<<endl;
    for(int x=0; x<2; x++)
{
        cout<<"|      HAPPY BIRTHDAY      |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
} 
 cout <<"|      HBD                 |"<<endl;
for (int i = 1; i < argc; ++i) 
        cout <<"       "<< argv[i] << "";
cout<<endl; 
cout<<"|__________________________|\n \n";
cout<< "Programming By : @MVafaeiM\n";
}
