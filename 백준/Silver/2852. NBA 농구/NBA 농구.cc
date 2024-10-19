#include <bits/stdc++.h>
using namespace std;

int MtoS(string s)
{
	int second = (60*stoi(s.substr(0,2))) + stoi(s.substr(3, 2));
	return second;
}

string StoM(int s) 
{
    int m = s / 60;
    int sec = s % 60;
    return (m < 10 ? "0" : "") + to_string(m) + ":" + (sec < 10 ? "0" : "") + to_string(sec);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, team, score1 = 0, score2 = 0;
    string time;
    int team1Time = 0, team2Time = 0, prevTime = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> team >> time;
        int currentTime = MtoS(time);

        if (score1 > score2) team1Time += currentTime - prevTime;
        else if (score2 > score1) team2Time += currentTime - prevTime;

        if (team == 1) score1++;
        else score2++;

        prevTime = currentTime;
    }

    int endTime = MtoS("48:00");
    if (score1 > score2) team1Time += endTime - prevTime;
    else if (score2 > score1) team2Time += endTime - prevTime;

    cout << StoM(team1Time) << '\n' << StoM(team2Time) << '\n';
	return 0;
}