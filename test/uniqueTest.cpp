#include<iostream>
#include<iterator>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool myfun(char  a, char  b){
    return (a ==' ') && (b ==' ');
}
int main(){
    string str = "11    22    33";
    cout<<str<<endl;
    auto last = unique(str.begin(),str.end(),myfun);
    cout<<str<<endl;
    str.erase(last,str.end());
    cout<<str<<endl;
    system("pause");
    return 0;
}