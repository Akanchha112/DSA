#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream fin;
    fin.open("abc",ios::app);
    fin << "you are a good human\n";
    fin << "#This is comment\n";
    fin << "This is line 3\n";
    fin << "Another line without #\n";
    fin << "# Another comment line\n";
    fin << "Final line without #\n";
    fin.close();
    fin.open("abc",ios::in);
    if(!fin.is_open()){
        cout<<"Error opening file";
        return 1;
    }
    int N=40;
    char line[N];
    while(fin.getline(line,N)){
        if(line[0]=='#'){
            continue;
        }
        cout<<line<<endl;
    }
    fin.close();
    return 0;

}
