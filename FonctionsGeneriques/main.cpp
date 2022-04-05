#include <iostream>
//#include "TemplateClass.h"
using namespace std;
template <class T>

 /*T Somme(T a,T b){
    return a + b;
 }*/

 /*void Permuter(T &a,T &b){
    T c;
    c = a;
    a = b;
    b = c;
 }*/

/* void Add_Array(T *tab,int n){
    for(int i=0;i<n;i++){
       cin>>tab[i];
    }
 }*/

  /*T Max_Array(T * tab,int n){
    T k = tab[0];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          if(k < tab[j]) k = tab[j];
    }
    }
        return k;
    }*/

  T Sort_Array(T *tab,int n){
    T k;
    for(int i=0;i<n;i++){
         k = tab[i];
        for(int j=i;j<n;j++){
          if(k > tab[j]){
            k = tab[j];
            tab[j] = tab[i];
            tab[i] = k;
    }
    }
    }
            return *tab;
    }


int main()
{
    string a = "10";
    string b = "20";

    string* t = new string[3];
    for(int i=0;i<3;i++){
        cin>>t[i];
    }

    *t = Sort_Array(t,3);


    //std::cout<<Somme(a,b);

    //Permuter(a,b);
    //cout<<a;

    //cout<<Max_Array(t,3);

    /*Add_Array(t,3);*/
    for(int i=0;i<3;i++){
        cout<<t[i]<<endl;
    }


    return 0;
}
