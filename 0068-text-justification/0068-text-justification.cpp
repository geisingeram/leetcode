class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
        int n = words.size();
        int index = 0;
        while(index < n){
            int count =words[index].length();
            int last = index +1;
            while(last < n){
                if (count +words[last].length()+1 >maxWidth)break;
                count += words[last].length()+1;
                last++;
            }
            
            string line;
            int numWords = last -index;
            int numSpaces = maxWidth - count + (numWords - 1);
            
            if(last == n || numWords == 1){
                for(int i = index; i< last;i++){
                    line += words[i];
                    if(i<last-1) line += " ";
                }
                line.append(maxWidth-line.length(), ' ');
            } else {
                int spaces = numSpaces/ (numWords - 1);
                int extraSpaces = numSpaces % (numWords -1);
                
                for(int i =index; i<last;i++){
                    line +=words[i];
                    if(i<last-1){
                        line.append(spaces, ' ');
                        if(extraSpaces > 0){
                            line += " ";
                            extraSpaces--;
                        }
                    }
                }
            }
            result.push_back(line);
            index = last;
        }
        return result;
    }
};