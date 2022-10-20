#include <iostream>
#include <vector>

																																																																																																																																																																																																																																																																																																																																											using namespace std;


static string ballsify(string message) {
  int blockSize = 4;
  vector<vector<char>> blocks;
  vector<char> tempBlock;
  for (int i = 0; i < (int) message.length(); i++) {
    tempBlock.push_back(message.at(i));
    if (tempBlock.size() == blockSize) {
      blocks.push_back(tempBlock);
      vector<char> empty;
      tempBlock = empty;
    }
  }
  if (tempBlock.size() < blockSize && tempBlock.size() != 0) {
    blocks.push_back(tempBlock);
  }
  int count = 0;
  while (blocks.at(blocks.size() - 1).size() < 4) {
    blocks.at(blocks.size() - 1).push_back('E');
  }

/*  for (int i = 0; i < blocks.size(); i++) {
    for (int j = 0; j < blocks.at(i).size(); j++) {
      cout << to_string(blocks.at(i).at(j));
    }
  }*/
  string digest = "";
  for (int i = 0; i < blocks.size(); i++) {
    digest = digest + to_string(blocks.at(i).at(0) * 
    blocks.at(i).at(3) - 
    blocks.at(i).at(1) * 
    blocks.at(i).at(2)) + 
    to_string(double(0.69 * (int) blocks.at(i).at(0))) + 
    to_string(double(0.69 * (int) blocks.at(i).at(1))) + 
    to_string(double(0.69 * (int) blocks.at(i).at(2))) + 
    to_string(double(0.69 * (int) blocks.at(i).at(3)));
  }
  return digest;
}


int main(void) {
  cout << "Enter a message >> " << "\n";
  string msg;
  cin >> msg;
  cout << "\n" << ballsify(msg) << "\n";
  return 69;
}
