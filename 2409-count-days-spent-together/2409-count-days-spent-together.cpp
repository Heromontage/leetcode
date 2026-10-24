class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m1 = stoi(arriveAlice.substr(0,2));
        int l1 = stoi(leaveAlice.substr(0,2));
        int m2 = stoi(arriveBob.substr(0,2));
        int l2 = stoi(leaveBob.substr(0,2));
        int a1 = stoi(arriveAlice.substr(3,2));
        int b1 = stoi(leaveAlice.substr(3,2));
        int a2 = stoi(arriveBob.substr(3,2));
        int b2 = stoi(leaveBob.substr(3,2));

        if (l1 < m2 || (l1 == m2 && b1 < a2) || l2 < m1 || (l2 == m1 && b2 < a1)) {
            return 0;
        }

        int sm, sd;
        if (m1 > m2 || (m1 == m2 && a1 > a2)) { 
            sm = m1; sd = a1; 
        }
        else { 
            sm = m2; sd = a2; 
        }

        int em, ed;
        if (l1 < l2 || (l1 == l2 && b1 < b2)) { 
            em = l1; ed = b1; 
        }
        else { 
            em = l2; ed = b2; 
        }

        if (sm == em) return ed - sd + 1;

        int count = days[sm - 1] - sd + 1;
        for (int m = sm + 1; m < em; m++) count += days[m - 1];
        count += ed;

        return count;
    }
};