#include <bits/stdc++.h>

using namespace std;

int main() {
    // UVA 11559

    int n_of_participants, budget, n_of_hotels, n_of_weekends, min_budget = INT_MAX;

    while (scanf("%d%d%d%d", &n_of_participants, &budget, &n_of_hotels, &n_of_weekends) == 4) {
        min_budget = INT_MAX;
        for (int i = 0; i < n_of_hotels; ++i) {
            int cost_of_bed;

            cin >> cost_of_bed;

            int weekends[n_of_weekends];

            for (int j = 0; j < n_of_weekends; ++j) {
                cin >> weekends[j];
            }

            sort(weekends, weekends + n_of_weekends);
            if(weekends[n_of_weekends - 1] < n_of_participants)
                continue;
            int cost = n_of_participants * cost_of_bed;

            if(cost < min_budget && cost <= budget)
                min_budget = cost;
        }

        if(min_budget != INT_MAX)
            cout << min_budget << endl;
        else
            cout << "stay home" << endl;
    }
}