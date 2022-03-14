class Solution {
public:
string simplifyPath(string path) {
  int i = 0, t;
  deque < string > files;
  string can_path;

  while (i < path.size()) {
    if (path[i] == '/')
      ++i;

    else if (path[i] == '.') {
      bool alpha = false;
      t = i + 1;
      while (t < path.size() and path[t] != '/') {
        if (path[t] != '.')
          alpha = true;
        ++t;
      }

      if (alpha)
        files.push_back(path.substr(i, t - i));
      else if (t - i == 2 and!files.empty())
        files.pop_back();
      else if (t - i > 2)
        files.push_back(path.substr(i, t - i));
      i = t;
    } 
    
    else {
      t = i + 1;
      while (t < path.size() and path[t] != '/')
        ++t;
      files.push_back(path.substr(i, t - i));
      i = t;
    }
  }

  if (files.empty())
    return "/";

  else {
    while (!files.empty()) {
      can_path = can_path + "/" + files.front();
      files.pop_front();
    }
  }

  return can_path;
}
};