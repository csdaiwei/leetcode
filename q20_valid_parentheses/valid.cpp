class Solution {
public:
	bool isValid(string s) {

		stack<char> p;

		for (int i = 0; i < s.length(); ++i){
			char c = s[i];
			switch(c){
				case '(':
				case '[':
				case '{': p.push(c); break;

				case ')': if(p.empty() || p.top()!='(') return false; else p.pop(); break;
				case ']': if(p.empty() || p.top()!='[') return false; else p.pop(); break;
				case '}': if(p.empty() || p.top()!='{') return false; else p.pop(); break;

				default: ;
			}
			
		}

		return p.empty();
		
	}
};