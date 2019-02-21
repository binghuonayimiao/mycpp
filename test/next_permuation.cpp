#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a[] = {2,1,3};
    vector<int> vec(a, a+3);
    do{
        copy(vec.begin(), vec.end(), ostream_iterator<int>(cout,","));
        cout<<endl;
    }while (prev_permutation(vec.begin(),vec.end()));
   system("pause");
 return 0;
}