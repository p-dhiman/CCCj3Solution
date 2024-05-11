#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findThirdHighestAndCount() {
    while (true) {
        int n;
        cin >> n;
        
        if (n < 3) {
            cout << "At least 3 scores are required.\n";
            return;
        }

        vector<int> scores(n);
        for(int i = 0; i < n; i++){
            cin >> scores[i];
        }
        
        sort(scores.begin(), scores.end());
        scores.erase(unique(scores.begin(), scores.end()), scores.end());
        
        if (scores.size() < 3) {
            cout << "There are not enough unique scores.\n";
            
            return;
        }
        
        int thirdHighest = scores[scores.size() - 3];
            
        int target = count(scores.begin(), scores.end(), thirdHighest);
        
        cout << thirdHighest << " " << target << endl;
    }
}

int main(){
    findThirdHighestAndCount();
    return 0;
}
