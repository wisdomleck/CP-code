#include <bits/stdc++.h>

using namespace std;

double distance(pair<int,int> p1, pair<int,int> p2){
    auto dist = sqrt((p1.first-p2.first)*(p1.first-p2.first) + (p1.second-p2.second)*(p1.second-p2.second));
    return dist;
}

int main(){
    vector<pair<int,int>> coords;
    for(int i = 0; i < 2; i++){
        int x,y;
        cin >> x >> y;
        pair<int,int> coord = {x,y};
        coords.push_back(coord);
    }

    int xdistance = abs(coords[0].first - coords[1].first);
    int ydistance = abs(coords[0].second - coords[1].second);

    // Corner points
    if(xdistance == ydistance){
        if(coords[0].first < coords[1].first){
            cout << coords[0].first + xdistance << " " << coords[0].second << " ";
            cout << coords[1].first - xdistance << " " << coords[1].second << " ";
        }
        else if(coords[0].first > coords[1].first){
            cout << coords[1].first + xdistance << " " << coords[1].second << " ";
            cout << coords[0].first - xdistance << " " << coords[0].second << " ";
        }
    }
    // Horizontal points
    else if(xdistance != 0 && ydistance == 0){
        cout << coords[0].first << " " << coords[0].second + xdistance<< " ";
        cout << coords[1].first << " " << coords[1].second + xdistance;
    }
    // Vertical points
    else if(ydistance != 0 && xdistance == 0){
        cout << coords[0].first + ydistance << " " << coords[0].second << " ";
        cout << coords[1].first + ydistance << " " << coords[1].second ;
    }
    else{
        cout << "-1" << endl;
    }


    return 0;
}
