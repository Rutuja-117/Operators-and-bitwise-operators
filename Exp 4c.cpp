
#include<iostream>
using namespace std;
int main(){
    int i=50,set_bit,reset_bit,set,reset;
    cout<<"Enter the bit to be set: ";
    cin>>set_bit;
    cout<<"Enter the bit to be reset: ";
    cin>>reset_bit;
    set=i|(1<<set_bit);
    reset=i&(~1<<reset_bit);
    cout<<"Set bit - "<<set<<endl<<"Reset bit - "<<reset;
    return 0;
}
/* OUTPUT 
Enter the bit to be set: 6
Enter the bit to be reset: 1
Set bit - 114
Reset bit - 48
*/
