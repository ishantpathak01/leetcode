class BrowserHistory {
public:
    stack<string> p, f;
    string curr;

    BrowserHistory(string homepage) {
        curr = homepage;
    }

    void visit(string url) {
        p.push(curr);
        curr = url;
        while(!f.empty()) f.pop();
    }

    string back(int steps) {
        while(steps-- && !p.empty()) {
            f.push(curr);
            curr = p.top();
            p.pop();
        }
        return curr;
    }

    string forward(int steps) {
        while(steps-- && !f.empty()) {
            p.push(curr);
            curr = f.top();
            f.pop();
        }
        return curr;
    }
};