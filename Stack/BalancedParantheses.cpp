#include<bits/stdc++.h>
using namespace std;
bool ArePair(char openning,char closing){
  if(openning == '(' && closing == ')') return true;
  else if (openning == '{' && closing == '}') return true;
  else if(openning == '[' && closing == ']') return true;
  return false;
}
bool AreParanthesesBalanced(string exp){
    stack<char> s;
    for(int i=0;i<exp.size();i++){
        if(exp[i]== '(' || exp[i]== '{' || exp[i]== '['){
            s.push(exp[i]);
           }
           else if(exp[i]== ')' || exp[i]== '}' || exp[i]== ']'){
            if(s.empty() || !ArePair(s.top(),exp[i])){
                return false;
            }else{
              s.pop();
            }
           }

    }
    return s.empty() ? true : false;


}
int main(){
 string expression;
 while(1){
    cout<<"Enter an expression : ";
 cin>>expression;
 if(AreParanthesesBalanced(expression))
    cout<<"Balanced"<<endl;
 else
    cout<<"Not Balanced "<<endl;
 }

}
