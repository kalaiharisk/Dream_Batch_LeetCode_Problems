class Solution {
public:
    bool parseBoolExpr(string expression) {
        if (expression == "t") return true;
        if (expression == "f") return false;
        if (expression[0] == '!') {
            return !parseBoolExpr(expression.substr(2, expression.size() - 3));
        }
        if (expression[0] == '&') {
            vector<string> subExprs = split(expression.substr(2, expression.size() - 3));
            bool result = true;
            for (const string& subExpr : subExprs) {
                result &= parseBoolExpr(subExpr);
                if (!result) break; 
            }
            return result;
        }
        if (expression[0] == '|') {
            vector<string> subExprs = split(expression.substr(2, expression.size() - 3));
            bool result = false;
            for (const string& subExpr : subExprs) {
                result |= parseBoolExpr(subExpr);
                if (result) break;  
            }
            return result;
        }
        
        return false;  
    }
    
private:
    vector<string> split(const string& expr) {
        vector<string> result;
        int start = 0, openParen = 0;
        for (int i = 0; i < expr.size(); ++i) {
            if (expr[i] == '(') openParen++;
            if (expr[i] == ')') openParen--;
            if (expr[i] == ',' && openParen == 0) {
                result.push_back(expr.substr(start, i - start));
                start = i + 1;
            }
        }
        result.push_back(expr.substr(start));  
        return result;
        
    }
};