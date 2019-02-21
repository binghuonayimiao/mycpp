#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;
void insertSort(vector<int> &vec){
    if(vec.empty()){
        return;
    }
    for(int j = 1; j < vec.size(); j++){
        int temp = vec[j];
        int i = j -1;
        while(i >= 0 && temp < vec[i]){
            vec[i+1] = vec[i];
            i--;
        }
        vec[i+1] = temp;
    }
    
}



int main()
{
   vector<int> vec = {6,3,1,4,7,9,30,20,4,7};
   insertSort(vec);
   for(int i = 0; i <vec.size();i ++){
       cout<<vec[i]<< " ";
   }
   system("pause");
    return 0;
}