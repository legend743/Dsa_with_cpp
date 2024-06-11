#include<iostream>
using namespace std;
class squareroot{
    public:
    int sqrt(int number){
    if(number==0||number==1){
        return number;
    }
    int start=1,end=number,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==number){
            return mid;
        }
        else if(mid*mid<number){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       
    }
 return ans;

}
};
int main(){
    squareroot sqrt;
    cout<<"enter number:"<<endl;
    int number;
    cin>>number;
   int result= sqrt.sqrt(number);
   cout<<"Square root of given number is:"<<result;
   return 0;

}