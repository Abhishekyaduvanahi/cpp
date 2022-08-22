#include<iostream>
using namespace std;
int main(){
int marks[6];
for(int i=0;i<6;i++){
    cout<<"Enter the marks if ith student i.e "<<i<<endl;
    cin>>marks[i];
}
cout<<endl<<endl<<endl;
for(int i=0;i<6;i++){
    cout<<" Marks of " <<i<<"th student is "<<marks[i]<<endl;
}

return 0;
}
