#include<bits/stdc++.h>
using namespace std;

// Function to find the distance of point p from the line formed by points a and b
double distance(pair<double, double> a, pair<double, double> b, pair<double, double> p) {
    return abs((b.second - a.second) * p.first - (b.first - a.first) * p.second + b.first * a.second - b.second * a.first) /
           sqrt((b.second - a.second) * (b.second - a.second) + (b.first - a.first) * (b.first - a.first));
}

// Function to compute the cross product
double crossProduct(pair<double, double> a, pair<double, double> b, pair<double, double> c) {
    return (b.first - a.first) * (c.second - a.second) - (b.second - a.second) * (c.first - a.first);
}

// Function to find the points on the convex hull
void quickHull(vector<pair<double, double>>& points, pair<double, double> a, pair<double, double> b, bool isLeft, vector<pair<double, double>>& hull) {
    double maxDistance = 0;
    int farthestPointIndex = -1;

    for (int i = 0; i < points.size(); i++) {
        double dist = distance(a, b, points[i]);
        if (dist > maxDistance) {
            maxDistance = dist;
            farthestPointIndex = i;
        }
    }

    if (farthestPointIndex == -1) return;

    hull.push_back(points[farthestPointIndex]);

    vector<pair<double, double>> leftSet, rightSet;

    for (int i = 0; i < points.size(); i++) {
        if (i == farthestPointIndex) continue;

        if (isLeft) {
            if (crossProduct(a, points[farthestPointIndex], points[i]) > 0) {
                leftSet.push_back(points[i]);
            } else {
                rightSet.push_back(points[i]);
            }
        } else {
            if (crossProduct(points[farthestPointIndex], a, points[i]) > 0) {
                leftSet.push_back(points[i]);
            } else {
                rightSet.push_back(points[i]);
            }
        }
    }

    quickHull(leftSet, a, points[farthestPointIndex], true, hull);
    quickHull(rightSet, points[farthestPointIndex], b, false, hull);
}

// Main function to compute the convex hull
vector<pair<double, double>> convexHull(vector<pair<double, double>>& points) {
    if (points.size() < 3) return {};

    vector<pair<double, double>> hull;

    // Find the leftmost and rightmost points
    pair<double, double> leftmost = *min_element(points.begin(), points.end());
    pair<double, double> rightmost = *max_element(points.begin(), points.end());

    hull.push_back(leftmost);
    hull.push_back(rightmost);

    // Divide the points into two subsets
    vector<pair<double, double>> leftSet, rightSet;

    for (const auto& p : points) {
        if (p == leftmost || p == rightmost) continue;

        if (crossProduct(leftmost, rightmost, p) > 0) {
            leftSet.push_back(p);
        } else {
            rightSet.push_back(p);
        }
    }

    // Recursively find the hull
    quickHull(leftSet, leftmost, rightmost, true, hull);
    quickHull(rightSet, leftmost, rightmost, false, hull);

    return hull;
}

int main() {
    vector<pair<double, double>> points = {
        {0, 0}, {1, 1}, {2, 2}, {2, 0}, {1, -1}, {0, 2}, {3, 1}, {3, 3}, {1, 3}, {2, 1}
    };

    vector<pair<double, double>> hull = convexHull(points);

    cout << "Points in the Convex Hull:" << endl;
    for (const auto& p : hull) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
