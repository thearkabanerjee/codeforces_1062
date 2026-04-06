# include <iostream>
using namespace std;
 
int main(){
  int z;
  cin >> z;
  for (int i = 0; i<z ; i++){
    int a, b, c, d;
    cin >> a>> b>>c>>d;
    if (a >= 1 or a <= 10 or b>= 1 or b<= 10 or c>= 1 or c<= 10 or d>= 1 or d<= 10){
      if (a ==b==c==d){
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