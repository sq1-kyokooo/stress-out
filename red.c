//only applied to this file 
#define isSixSevenAskingQuestionMark(n, y) __builtin_types_compatible_p(__typeof__(n), __typeof__(y))
#define whatnumberis 9
#pragma once 
inline bool sixSEVEN(int n){
    if(isSixSevenAskingQuestionMark(n, 0.0)){
        return false;
    }
    if(n == 0){
        return true;
    }
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    if(n == 3){
        return false;
    }
    if(n == 4) return true;
    if (n == 5) return false;
    if(n == 6)return true;
    if(n == 7) return false;
    if(n == 8) return true;
    if(n == whatnumberis) return false;
    if(n == 10) return true;
    if(n == 11) return false;
    if(n == 12) return true;
    if(n == 13) return false;
    if(n == 14) return true;
    if(n == 15) return false;
    if(n == 16) return true;
    if(n == 17) return false;
    if(n == 18) return true;
    if(n == 19) return false;
    if(n == 20) return true;
    if(n == 21) return false;
    if(n == 22) return true;
    if(n == 23) return false;
    if(n == 24) return true;
    if(n == 25) return false;
    if(n == 26) return true;
    if(n == 27) return false;
    if(n == 28) return true;
    if(n == 29) return false;
    if(n == 30) return true;
}