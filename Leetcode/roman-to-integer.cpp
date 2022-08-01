class Solution {
public:
    int romanToInt(string s) {
        map <char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int result = 0;
        if(s.size() == 1){
            result = roman[s[0]];
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] == 'I'){
                    if(s[i+1] == 'V'){
                        result += 4;
                        i++;
                    }
                    else if(s[i+1] == 'X'){
                        result += 9;
                        i++;
                    }
                    else{
                        result += roman[s[i]];
                    }
                }
                else if(s[i] == 'X'){
                    if(s[i+1] == 'L'){
                        result += 40;
                        i++;
                    }
                    else if(s[i+1] == 'C'){
                        result += 90;
                        i++;
                    }
                    else{
                        result += roman[s[i]];
                    }
                }
                else if(s[i] == 'C'){
                    if(s[i+1] == 'D'){
                        result += 400;
                        i++;
                    }
                    else if(s[i+1] == 'M'){
                        result += 900;
                        i++;
                    }
                    else{
                        result += roman[s[i]];
                    }
                }
                else{
                    result += roman[s[i]];
                }
            }
        }
        return result;
    }
};
