#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T> using o_set_g = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T> using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T> using o_multiset_g = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// find_by_order(k): It returns to an iterator to the kth element (counting from zero) in the set in O(logn) time.To find the first element k must be zero.
// order_of_key(k): It returns to the number of items that are strictly smaller than our item k in O(logn) time.