#include <map>
#include <iostream>
#include <random>

template<typename K, typename V>
class interval_map {
    friend void IntervalMapTest();
    
    V m_valBegin;
    std::map<K, V> m_map;
    
public:
    interval_map(V const& val)
    : m_valBegin(val)
    {}
    
    void assign(K const& keyBegin, K const& keyEnd, V const& val) {
		

		// if (!(keyBegin < keyEnd)) {
        // 	return;
    	// }
		// auto it = m_map.upper_bound(keyBegin);
		// if (it != m_map.begin()) {
		// 	--it;  // Adjust iterator to the preceding entry
		// 	if (it->second == val) {
		// 		m_map.erase(it);
		// 	}
		// 	else {
		// 		++it;
		// 	}
		// }

		// while (it != m_map.end() && it->first < keyEnd) {
		// 	it = m_map.erase(it);
		// }

		// // Insert the new entry for the interval [keyBegin, keyEnd)
		// m_map.emplace_hint(it, keyBegin, m_map[keyBegin]);
		// m_map[keyBegin] = val;

		
		  if (keyBegin >= keyEnd) {
				return;
			}

			// Check if the key type is less-than comparable.
			if (!std::less<K>()(keyBegin, keyEnd)) {
				return;
			}

			// Erase all entries in the map that fall within the new interval.
			auto beginIter = m_map.lower_bound(keyBegin);
			auto endIter = m_map.upper_bound(keyEnd);
			m_map.erase(beginIter, endIter);

			// Insert a new entry into the map for the new interval.
			m_map.emplace(keyBegin, val);
			m_map[keyEnd] = m_valBegin;
			m_map[keyBegin] = val;
    }
    
    V const& operator[](K const& key) const {
        auto it = m_map.upper_bound(key);
        if (it == m_map.begin()) {
            return m_valBegin;
        } else {
            return (--it)->second;
        }
    }
};

// test function
void IntervalMapTest() {
	interval_map<int, char> M('A');
M.assign(1, 3, 'B');
M.assign(3, 5, 'A');
for (int i = -2; i < 6; ++i) {
        std::cout << i << " -> " << M[i] << std::endl;
    }

// 	interval_map<int, char> M('A');
//   M.assign(1, 3, 'B');

//   // Check that the map is correct.
//   for (int i = -2; i <= 5; i++) {
//     char val = M[i];
//     if (i < 1) {
//       assert(val == 'A');
//     } else if (i <= 3) {
//       assert(val == 'B');
//     } else {
//       assert(val == 'A');
//     }
//   }
    // interval_map<int, char> M('A');

    // // Define test cases
    // std::vector<std::tuple<int, int, char, std::map<int, char>>> testCases = {
    //     // Test case 1
    //     {1, 3, 'B', {{-2, 'A'}, {-1, 'A'}, {0, 'A'}, {1, 'B'}, {2, 'B'}, {3, 'A'}, {4, 'A'}, {5, 'A'}}},
    //     // Test case 2
    //     {2, 4, 'C', {{-2, 'A'}, {-1, 'A'}, {0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'C'}, {4, 'A'}, {5, 'A'}}},
    //     // Add more test cases as needed
    // };

    // // Validate test cases
    // for (const auto& [keyBegin, keyEnd, val, expected] : testCases) {
    //     M.assign(keyBegin, keyEnd, val);

    //     if (M.m_map != expected) {
    //         std::cout << "Validation failed for test case: "
    //                   << "keyBegin = " << keyBegin << ", "
    //                   << "keyEnd = " << keyEnd << ", "
    //                   << "val = " << val << std::endl;
    //     }
    // }

    // std::cout << "Validation complete" << std::endl;
}


void test_assign_function() {
  interval_map<int, char> M('A');

  // Empty interval.
//   M.assign(1, 1, 'A');
//   assert(M[1] == 'A');

//   // Single-element interval.
//   M.assign(1, 2, 'A');
//   assert(M[1] == 'A');
//   assert(M[2] == 'A');

//   // Overlap intervals.
//   M.assign(1, 3, 'A');
//   M.assign(2, 4, 'B');
//   assert(M[1] == 'A');
//   assert(M[2] == 'B');
//   assert(M[3] == 'B');

//   // Adjacent intervals.
//   M.assign(1, 3, 'A');
//   M.assign(3, 4, 'B');
//   assert(M[1] == 'A');
//   assert(M[2] == 'A');
//   assert(M[3] == 'B');

//   // Disjoint intervals.
//   M.assign(1, 3, 'A');
//   M.assign(5, 6, 'B');
//   assert(M[1] == 'A');
//   assert(M[2] == 'A');
//   assert(M[3] == 'A');
//   assert(M[5] == 'B');
//   assert(M[6] == 'B');
}
int main() {
	IntervalMapTest();
	return 0;
}
