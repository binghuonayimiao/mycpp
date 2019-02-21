class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        if(tokens.empty()){
            return 0;
        }
        stack<int> num;
        for(auto str : tokens){
            if(str == "+" || str == "-" || str == "*" || str == "/"){
               int a = num.top();
               num.pop();
               int b = num.top();
               num.pop();
               switch(*str.c_str()){
                   case '+':
                       num.push(a+b);
                       break;
                    case '-':
                       num.push(a-b);
                       break;
                    case '*':
                       num.push(a*b);
                       break;
                    case '/':
                       num.push(a/b);
                       break;
                    default:
                       break;
               }
            }else{
                   stringstream s;
                   s << str;
                   int temp;
                   s >> temp;
                   num.push(temp);
            }
        }
        return num.top();
    }
};