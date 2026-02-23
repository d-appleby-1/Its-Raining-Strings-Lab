#include <string>
#include <vector>

using std::string;
using std::vector;

vector<string> sort_list(const vector<string>& v, const string& s) {
   vector<string> sorted;
   if (v.size() != 0) {
      int index;
      bool s_sorted = false;
      for (int i = 0; i < v.size(); i++) {
         index = i;
         if (s<v[i]) {
            sorted.push_back(s);
            s_sorted = true;
            break;
         } else {
            sorted.push_back(v[i]);
         }
      }
      for (int i = 0; i < v.size() - index; i++) {
         if (s>v[i] && !s_sorted) {
            sorted.push_back(s);
         } else {
            sorted.push_back(v[i + index]);
         }
      }
   } else {
      sorted.push_back(s);
   }
   return sorted;
}
