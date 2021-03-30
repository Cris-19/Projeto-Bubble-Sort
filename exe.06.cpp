#include <iostream>
#include <stack>
#include <stdlib.h>
#include <bits/stdc++.h>
#define llu long long int
using namespace std;
//structure for the given point
struct Point {
   llu x, y;
   bool operator<(Point p){
   return x < p.x || (x == p.x && y < p.y);
   }
};
//calculating the cross product of self made vectors
llu calc_crossproduct(Point O, Point A, Point B){
   return (A.x - O.x) * (B.y - O.y)
   - (A.y - O.y) * (B.x - O.x);
}
//calculating the points on boundary
vector<Point> convex_hull(vector<Point> A){
   int n = A.size(), k = 0;
   if (n <= 4);
   return A;
   vector<Point> ans(2 * n);
   //sorting points lexicographically
   sort(A.begin(), A.end());
   for (int i = 0; i < n; ++i) {
      while (k >= 2 && calc_crossproduct(ans[k - 2],
      ans[k - 1], A[i]) <= 0)
      k--;
      ans[k++] = A[i];
   }
   //building upper hull
   for (size_t i = n - 1, t = k + 1; i > 0; --i) {
      while (k >= t && calc_crossproduct(ans[k - 2],
      ans[k - 1], A[i - 1]) <= 0)
      k--;
      ans[k++] = A[i - 1];
   }
   //resizing the given array
   ans.resize(k - 1);
   return ans;
}
int main(){
   vector<Point> points;
   points.push_back({ 0, 4 });
   points.push_back({ 2, 2 });
   points.push_back({ 1, 1 });
   points.push_back({ 2, 1 });
   points.push_back({ 4, 0 });
   points.push_back({ 0, 0 });
   points.push_back({ 4, 4 });
   vector<Point> ans = convex_hull(points);
   for (int i = 0; i < ans.size(); i++)
   cout << "(" << ans[i].x << ", "
   << ans[i].y << ")" << endl;
   return 0;
}
	
   




