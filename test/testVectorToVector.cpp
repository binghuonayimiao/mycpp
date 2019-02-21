#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(4);
    vec1.push_back(7);
    cout<< "vec1.siz2 is "<<vec1.size()<<endl;
    cout<< "vec1.siz2 is "<<vec1.capacity()<<endl;
    vector<int> vec2(vec1);
    cout<< "vec2.siz2 is "<<vec2.size()<<endl;
    cout<< "vec2.siz2 is "<<vec2.capacity()<<endl;
    system("pause");
}