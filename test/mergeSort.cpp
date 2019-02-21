#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;
void merge(vector<int> &vec, int begin, int end){
     if(vec.empty() || begin >= end){
        return;
    }
    int mid = (begin+end)/2;
    int begin1 = begin;
    int end1 = mid;
    int begin2 = mid + 1;
    int end2 = end;
    vector<int> arr(end - begin + 1);
    int i = 0;
    while(begin1 <= end1 && begin2 <= end2){
        if(vec[begin1] < vec[begin2]){
            arr[i++] = vec[begin1++];
        }else{
            arr[i++] = vec[begin2++];
        }
    }
    while(begin1 <= end1){
         arr[i++] = vec[begin1++];
    }
    while(begin2 <= end2){
         arr[i++] = vec[begin2++];
    }
    for(int i = 0; i < arr.size(); i++){
        vec[begin++] = arr[i];
    }
}
void mergeSort(vector<int> &vec, int begin, int end){
    if(vec.empty() || begin >= end){
        return;
    }
    int mid;
    mid = (begin +end)/2;
    mergeSort(vec, begin, mid);
    mergeSort(vec, mid+1, end);
    merge(vec, begin, end);
}


int main()
{
   vector<int> vec = {6,3,1,4,7,9,30,20,4};
   mergeSort(vec, 0, vec.size()-1);
   for(int i = 0; i <vec.size();i ++){
       cout<<vec[i]<< " ";
   }
   system("pause");
    return 0;
}