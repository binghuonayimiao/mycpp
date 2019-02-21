#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;
int qucikHandler(vector<int> &vec, int begin, int end){

    int nTemp = vec[begin];
    while(begin < end){
        while(begin < end){
            if(vec[end] < nTemp){
                vec[begin] = vec[end];
                begin++;
                break;
            }else{
                end--;
            }
        }
        while(begin < end){
            if(vec[begin] > nTemp){
                vec[end] = vec[begin];
                end--;
                break;
            }else{
                begin++;
            }
        }
    }
    vec[begin] = nTemp;
    return begin;
}
void quickSort(vector<int> &vec, int begin, int end){
    if(vec.empty() || begin >= end){
        return;
    }
    int nStandard = qucikHandler(vec, begin, end);
    quickSort(vec, begin, nStandard-1);
    quickSort(vec, nStandard+1, end);
}


int main()
{
   vector<int> vec = {6,3,1,4,7,9,30,20,4,7};
   quickSort(vec, 0, vec.size()-1);
   for(int i = 0; i <vec.size();i ++){
       cout<<vec[i]<< " ";
   }
   system("pause");
    return 0;
}