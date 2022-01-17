//Given an unsorted array Arr of size N of positive integers. One number
//'A' from     set {1, 2, …N} is missing and one number 'B'
//occurs twice in array. Find these two numbers.

class Solution {
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int miss=-1;
        int repeat=-1;
        int index;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                repeat=arr[i];
                index=i;
                break;
            }
        }
        if(arr[0]!=1){
            miss=1;
        }
        else{
            bool flag=false;
            for(int i=1;i<n;i++){
                if(arr[i]-arr[i-1]>1){
                    miss=arr[i-1]+1;
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                miss=n;
            }
        }
        int *a=new int[2];
        a[0]=repeat;
        a[1]=miss;
        return a;
    }
};
