#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void printResult() {
    string gradeka ;
    srand(time(0));
    int x = rand()%9;
    if(x==0) gradeka = "A" ;
    if(x==1) gradeka = "B+" ;
    if(x==2) gradeka = "B" ;
    if(x==3) gradeka = "C+" ;
    if(x==4) gradeka = "C" ;
    if(x==5) gradeka = "D+" ;
    if(x==6) gradeka = "D" ;
    if(x==7) gradeka = "F" ;
    if(x==8) gradeka = "W" ;
cout << "You will get " << gradeka <<" in this 261102." <<  endl ;

}

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    int grade = rand() % 9 ;
    
printResult();

return 0;
 
}
