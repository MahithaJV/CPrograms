# include <iostream>
using namespace std;
int main(){
    
int a[6];
int i,n;
cout <<"enter number of elements";
cin >> n;
for(i=0;i<n;i++){
    cout <<"enter elenent" <<i<<endl;
    cin >> a[i];
}
int l=sizeof(a)/sizeof(a[0]);
cout << "size of array os :"<< l <<endl;
 for (i=0;i<l;i++){
    cout << "enteres=d elements are "<< a[i]<<endl;
 }

return 0;


}