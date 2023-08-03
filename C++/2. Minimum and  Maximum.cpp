#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = { 1000, 11, 445, 1, 330, 3000 };
     int n = sizeof(arr)/sizeof(arr[0]);
     int min = arr[0];
     int max = arr[0];
     if(n == 1){
        cout<<"minimum is " <<min<<endl;
        cout<<"maximum is " <<max<<endl;
     }else{
        for(int i = 0; i < n; i++)
        {
            if(min > arr[i]) min = arr[i];
            if(max < arr[i]) max = arr[i];
        }
        cout<<"minimum is " <<min<<endl;
        cout<<"maximum is " <<max<<endl;

     }

}
