#include <iostream>
#include <vector>

using namespace std;



string doThing(string message) {
  int blockSize = 4;
  vector<vector<char>> blocks;
  vector<char> tempBlock;
  for (int i = 0; i < (int) message.length(); i++) {
    tempBlock.push_back(message.at(i));
    if (i % blockSize == 0) {
      blocks.push_back(tempBlock);
      vector<char> empty;
      tempBlock = empty;
    }
  }
  return message;
}

int main() {
  cout << "Enter a message >> " << "\n";
  string msg;
  cin >> msg;
  cout << "\n" << doThing(msg) << "\n";
  return 69;
}
