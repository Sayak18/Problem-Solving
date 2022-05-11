#include <bits/stdc++.h>
using namespace std;

class Contributer{
    public:
        string name;
        vector<string> skill_name;
        vector<int> skill_level;

        Contributer(string n){
            name = n;
        }
};
class Project{
    public:
        string projName;
        int deadline;
        int score;
        int bestDate;
        int noOfRoles;
        vector<string> role;
        vector<int> requiredLevel;

        Project(string pN, int dL, int sc, int bD, int noR){
            projName =  pN;
            deadline = dL;
            score = sc;
            bestDate = bD;
            noOfRoles = noR;
        }
};

int main(){

    
    vector<Contributer> Contributers;
    vector<Project> Projects;

    int coNo, proNo;
    cin>>coNo>>proNo;
    while(coNo--){
        string NAME;
        cin>>NAME;

        
        Contributer con(NAME);

        cin.ignore();
        int skillNo;
        cin>>skillNo;
        while(skillNo--){
            string sN;
            int l;
            cin>>sN;
            cin.ignore();
            cin>>l;

            con.skill_name.push_back(sN);
            con.skill_level.push_back(l);
        }
        
        Contributers.push_back(con);
    }

    while(proNo--){
        string pN;
        int dL, sc, bD, noR;
        cin>>pN;
        cin.ignore();
        cin>>dL>>sc>>bD>>noR;

        Project pro(pN, dL, sc, bD, noR);
        while(noR--){
            string r;
            int rL;
            cin>>r;
            cin.ignore();
            cin>>rL;

            pro.role.push_back(r);
            pro.requiredLevel.push_back(rL);
        }
        Projects.push_back(pro);
    }

    return 0;
}
