#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
class file{

    ifstream in;
    int notowane = 0;
    int size=0;
    public:

    void run();
    bool dwucykliczny(string s);
    bool d2jeden(string s);
    
};

void file::run(){
    in.open("ciagi.txt");
    string oper;
    for(int i =0 ; i<1000;++i){
        in>>oper;
        if(dwucykliczny(oper)){
            cout <<oper<<endl;
        }
        if(d2jeden(oper)){
            notwone++;
        }
    }
    
    cout<<notwone;
    
}

bool file::dwucykliczny(string s){
    string s1,s2;
    if(s.size()%2==0){
        if(s.substr(s.size()/2,s.size()/2)==s.substr(0,s.size()/2)){
            return true;
        }
    }

    return false;
    
}

int main() {
    file lup ;
    lup.run();

    return 0;
    
}
