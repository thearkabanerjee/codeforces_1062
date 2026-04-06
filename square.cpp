# include <iostream>
using namespace std;
 
int main(){
  int z;
  cin >> z;
  for (int i = 0; i<z ; i++){
    int a, b, c, d;
    cin >> a>> b>>c>>d;
    if (a >= 1 and a <= 10 and b>= 1 and b<= 10 and c>= 1 and c<= 10 and d>= 1 and d<= 10){
      if (a ==b && b==c && c==d){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }else{
      cout << "NO" << endl;
    }
    
  }
  
  return 0;
}