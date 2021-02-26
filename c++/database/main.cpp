#include <iostream>

using namespace std;

bool is_number(const string &s) {
  string::const_iterator it = s.begin();
  while (it != s.end() && isdigit(*it)) ++it;
  return !s.empty() && it == s.end();
}

void printLine(int *a, int size) {
  for (int i = 0; i < size; i++) {
    cout << "+";
    for (int j = 0; j < a[i]; j++) {
      cout << "-";
    }
  }
  cout << "+" << endl;
}

void printHeader(string *header, int *columnsize, int size) {
  for (int i = 0; i < size; i++) {
    cout << "| " << header[i];
    int blank_space = columnsize[i] - header[i].length() - 1;
    for (int j = 0; j < blank_space; j++) {
      cout << " ";
    }
  }
  cout << "|" << endl;
}

void printTuple(string *a, int *columnsize, int size) {
  for (int i = 0; i < size; i++) {
    int blank_space = columnsize[i] - a[i].length() - 1;
    if (is_number(a[i])) {
      cout << "|";
      for (int j = 0; j < blank_space; j++) {
        cout << " ";
      }
      cout << a[i] << " ";
    } else {
      cout << "| " << a[i];
      for (int j = 0; j < blank_space; j++) {
        cout << " ";
      }
    }
  }
  cout << "|" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  while (n--) {
    int columns, tuples;
    cin >> columns >> tuples;

    string header[columns];
    string table[tuples][columns];
    int size_columns[columns];

    for (int i = 0; i < columns; i++) {
      cin >> header[i];
      size_columns[i] = header[i].length() + 2;
    }

    int max_size_tuple = 0;
    for (int l = 0; l < tuples; l++) {
      int size = 0;
      for (int i = 0; i < columns; i++) {
        cin >> table[l][i];

        if (table[l][i].length() > size_columns[i] - 2) {
          size_columns[i] = table[l][i].length() + 2;
        }
      }
    }

    printLine(size_columns, columns);
    printHeader(header, size_columns, columns);
    printLine(size_columns, columns);
    for (int l = 0; l < tuples; l++)
      printTuple(table[l], size_columns, columns);
    printLine(size_columns, columns);
  }
}