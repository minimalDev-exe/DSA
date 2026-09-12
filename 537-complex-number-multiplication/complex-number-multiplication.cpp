class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int posPlus1 = num1.find("+");
        int posPlus2 = num2.find("+");

        int real1 = stoi(num1.substr(0,posPlus1));
        int real2 = stoi(num2.substr(0,posPlus2));
        int img1 = stoi(num1.substr(posPlus1+1));
        int img2 = stoi(num2.substr(posPlus2+1));

        int ansReal = real1*real2 - img1*img2;
        int ansImg = real1*img2 + real2*img1;

        return to_string(ansReal) + "+" + to_string(ansImg) + "i";
    }
};