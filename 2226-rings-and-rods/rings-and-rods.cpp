class Solution {
public:
    int countPoints(string rings) {
        vector<bool>red(10,false);
        vector<bool>blue(10,false);
        vector<bool>green(10,false);
        for(int i=0; i<rings.size(); i+=2){
            if(rings[i]=='R'){
                red[rings[i+1]-'0'] = true;
            }
            else if(rings[i]=='B'){
                blue[rings[i+1]-'0'] = true;
            }
            else{
                green[rings[i+1]-'0'] = true;
            }
        }
        int ans = 0;
        for(int i=0; i<10; i++){
            if(red[i]==true && green[i]==true && blue[i]==true) ans++;
        }
        return ans;
    }
};