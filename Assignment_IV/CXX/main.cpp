#include <iostream>
#include <string>
#include "hash_fn.hpp"
using namespace std;

int main() {
    int m_values[] = {10, 11, 37};
    int num_m = 3;

    int int_keys[] = {
        21,22,23,24,25,26,27,28,29,30,
        51,52,53,54,55,56,57,58,59,60
    };
    int num_int = 20;

    string str_keys[] = {
        "cat","dog","bat","cow","ant",
        "owl","bee","hen","pig","fox"
    };
    int num_str = 10;

    for (int mi = 0; mi < num_m; mi++) {
        int m = m_values[mi];
        cout << "=== Integer Hash (m = " << m << ") ===\n";
        cout << "Key\tIndex\n-------------------\n";

        for (int i = 0; i < num_int; i++) {
            int idx = hashInt(int_keys[i], m);
            cout << int_keys[i] << "\t" << idx << "\n";
        }
        cout << "\n";
    }

    // ---- String Tests ----
    for (int mi = 0; mi < num_m; mi++) {
        int m = m_values[mi];
        cout << "=== String Hash (m = " << m << ") ===\n";
        cout << "Key\tIndex\n-------------------\n";

        for (int i = 0; i < num_str; i++) {
            int idx = hashString(str_keys[i], m);
            std::cout << str_keys[i] << "\t" << idx << "\n";
        }
        cout << "\n";
    }

    return 0;
}
