#include <iostream>
using namespace std;

bool is_palindromic(int n) {
   int x = n, r = 0, z;
   bool v;
   for (int i = 1; x != 0; i++) {
        z = x%10;
        x = x/10;
        r = z+(r*10);
   }
   if (r == n) v = true;
   else v = false;
   return v;
}

bool es_capicua(int n) {
    int x, girar = 0;
    x = n;
    while (x != 0) {
        girar = girar*10 + x%10;
        x /= 10;
    }
    return n == girar;
}


int main(){
    int n;
    for (int i = 100; i < 1000; i++) {
      for (int j = 100; j < 1000; j++) {
        if(es_capicua(i*j)){
          cout << "Numeros: " << i << ", " << j <<endl;

        }
      }
    }
}
