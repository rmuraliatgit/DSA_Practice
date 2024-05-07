#include<bits/stdc++.h>
using namespace std;
#define print(x) cout << x;
#define printl(x) cout << x << '\n';
void explainPair();
void explainVector();
void explainList();
void explainDeque();
void explainStack();
void explainQueue();
void explainPriorityQueue();
void explainSet();
void explainMultiSet();
void explainUnorderedSet();
void explainMap();
void explainMultiMap();
void explainUnorderedMap();
void explainExtra();
int main(){
	// explainPair();
	// explainVector();
	// explainList();
	// explainDeque();
	// explainStack();
	// explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();
    explainExtra();
	return 0;
}
void explainPair(){
	pair<int,int> p = {1,1};
	cout << p.first << " " << p.second << '\n';
	pair<int, pair<int,int>> pp = {2, {3,4}};
	cout << pp.first << " " << pp.second.second << " " << pp.second.first << '\n';
	pair<int,int> arr[] = {{1,2},{2,3},{3,4}};
	cout << arr[1].first << " " << arr[1].second << '\n';
}
void explainVector(){
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);
	cout << v[0] << " "<< v[1] << '\n';

	vector<pair<int,int>> vPair;
	vPair.push_back({1,2});
	vPair.emplace_back(3,4);
	cout << vPair[0].first << " " << vPair[0].second << '\n';
	cout << vPair[1].first << " " << vPair[1].second << '\n';

	vector<int> v1(5, 100); // This creates a vector of space of 5 with all 100s in it
	vector<int> v2(5);      // This creates a vector of space of 5 with all 0s in it
	// We can even add 6 elements in v2, as it increase it's size when needed
	vector<int> v3(v2);		// This copies all value of v2 into v3

	vector<int> v4 = {1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator it1 = v4.begin(); // This is pointing to the starting of the vector(memory)
	it1++;
	cout << *(it1) << '\n';

	// vector<int>::iterator it2 = v4.end();
	// vector<int>::iterator it3 = v4.rend();
	// vector<int>::iterator it4 = v4.rbegin();

	vector<int>::reverse_iterator rit = v4.rbegin();
	cout << *rit << '\n';  // This will print 10, the last element in the vector v4.

	// Example of using a normal iterator to access all elements
	for (vector<int>::iterator it = v4.begin(); it != v4.end(); ++it) {
	    cout << *it << " ";
	}
	cout << '\n';

	// Example of using a reverse iterator to access all elements in reverse order
	for (auto rit = v4.rbegin(); rit != v4.rend(); ++rit) { // we can use auto as a data type
	    cout << *rit << " ";
	} cout << '\n';

	for(auto it: v4){
		cout << it << " ";
	}

	cout << '\n';
	cout << v4[3] << " " << v4.at(3) << '\n';

	cout <<"v4.back(): " << v4.back() << '\n';

	// Erase
	v4.erase(v4.begin()+2); // which element we have to erase
	for(auto it: v4){
		cout << it << " ";
	} cout << '\n';

	v4.erase(v4.begin()+2, v4.begin()+4); // From where till before we have to erase

	// Insert
	vector<int> v5(2,100); // {100,100}
	v5.insert(v5.begin(),300); // {300,100,100}
	v5.insert(v5.begin()+1,2,10); // {300,10,10,100,100}	

	vector<int> copy(2,50);
	v5.insert(v5.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

	cout <<"size of the vector v5 is "<< v5.size() << '\n';

	v5.pop_back();
	cout <<"size of the vector v5 is "<< v5.size() << '\n';

	v5.swap(v4);
	v4.clear();
	cout << v4.empty() << '\n'; // 
}

void explainList(){
    // Creating and initializing a list
    list<int> myList = {10, 20, 30, 40, 50};

    // Displaying list elements
    cout << "Original list: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << '\n';

	cout << "First element: " << myList.front() << '\n';
	cout << "Last element: " << myList.back() << '\n';

    // Adding elements to the list
    myList.push_back(60);  // Adds 60 at the end
    myList.push_front(5);  // Adds 5 at the beginning

    // Iterator to the beginning of the list
    list<int>::iterator it = myList.begin();

    // Advance the iterator to the 3rd position
    advance(it, 2);

    // Inserting elements using iterator
    myList.insert(it, 25);  // Inserts 25 before the element pointed by iterator (before 30)

    // Erasing elements
    it = myList.begin();    // Reset iterator to the beginning
    advance(it, 1);         // Move iterator to second element
    myList.erase(it);       // Remove the element at the iterator (removes 10)

    // Remove elements by value
    myList.remove(50);      // Removes all occurrences of '50'

    // Reversing the list
    myList.reverse();

    // Sorting the list (Note: Only use sort() on lists, not on other containers)
    myList.sort();

    // Unique (removes consecutive duplicates only after sorting)
    myList.unique();

    // Displaying modified list
    cout << "Modified list: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << '\n';

    // Splice: Transferring elements from one list to another
    list<int> anotherList = {100, 200, 300};
    auto it_target = myList.begin();
    advance(it_target, 3);  				// Moving iterator to the 4th position
    myList.splice(it_target, anotherList);  // Insert all elements of anotherList before 4th position of myList

    // Displaying list after splicing
    cout << "List after splicing: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << '\n';

	myList.resize(10);  // Resize the list to contain 10 elements
	myList.resize(5, 100);  // Resize the list to 5 elements, fill new slots with 100 if any
    for (int num : myList) {
        cout << num << "-";
    } cout << '\n';
    // Clearing the list
    myList.clear();
    cout << "List size after clearing: " << myList.size() << '\n';

    list<int> first = {5, 10, 15};
	list<int> second = {2, 4, 6};
	first.sort();
	second.sort();
	first.merge(second);  // Merge second into first; both lists should be sorted for merge

	for(auto i:first){
		cout << i << ' ';
	} cout << '\n';

	first.remove_if([](int x) { return x >= 10; });  // Remove all elements greater than 10

	first.emplace_back(99);  // Constructs 99 at the back of the list
	first.emplace_front(42); // Constructs 42 at the front of the list

	for(auto i:first){
		cout << i << ' ';
	} cout << '\n';

	// list is faster than vector while inserting because vector uses singly linked list while here push_front uses doubly linked list
}

void explainDeque() {
    // Initialize a deque with some elements
    deque<int> d = {10, 20, 30, 40, 50};

    // Display initial contents
    cout << "Initial deque: ";
    for (int num : d) {
        cout << num << " ";
    } cout << '\n';

    // Adding elements at both ends
    d.push_back(60);
    d.push_front(5);

    // Accessing first and last elements directly
    cout << "First element: " << d.front() << ", Last element: " << d.back() << '\n';

    // Element access using operator[]
    cout << "Third element using operator[]: " << d[2] << '\n';

    // Safe access using at()
    try {
        cout << "Fourth element using at(): " << d.at(3) << '\n';
    } catch (out_of_range& e) {
        cout << "Out of range error: " << e.what() << '\n';
    }

    // Using iterators to insert elements
    auto it = d.begin() + 2;
    d.insert(it, 15); // Insert 15 before the third element

    // Using emplace to construct elements in place
    d.emplace_back(70);
    d.emplace_front(0);

    // Erase elements using iterators
    it = d.begin() + 4;
    d.erase(it);

    // Remove specific elements by value
    d.push_back(10); // Adding a duplicate for removal example

    // Displaying deque after modifications
    cout << "Modified deque: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << '\n';

    // Sorting the deque
    sort(d.begin(), d.end());
    cout << "Sorted deque: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << '\n';

    // Reversing the deque
    reverse(d.begin(), d.end());
    cout << "Reversed deque: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << '\n';

    // Displaying using reverse iterators
    cout << "Display using reverse iterators: ";
    for (auto rit = d.rbegin(); rit != d.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << '\n';

    // Resizing the deque
    d.resize(15, 100); // Resize the deque to 5 elements, fill with 100 if new elements are added
    for (int num : d) {
        cout << num << " ";
    }
    cout << '\n';
    // Swapping with another deque
    deque<int> newDeque = {1, 2, 3};
    d.swap(newDeque);

    // Clearing the deque
    d.clear();
    cout << "Deque size after clearing: " << d.size() << '\n';
}


void explainStack() {
    // Initialize a stack
    stack<int> s;

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "size of the stack: "<< s.size() << '\n';
    // Displaying the top of the stack
    if (!s.empty()) {
        cout << "Top element: " << s.top() << '\n';
    }

    // Pop element from the stack
    s.pop();
    cout << "Top element after one pop: " << s.top() << '\n';

    // Check the size of the stack
    cout << "Current size of stack: " << s.size() << '\n';

    // Push more elements
    s.push(40);
    s.push(50);

    // Accessing elements (loop until stack is empty)
    cout << "Elements in stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); // Remove element after accessing
    }
    cout << '\n';

    // Check if stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << '\n';

    // Since stacks don't support iterators, direct element access other than 'top' is not possible
    // No clearing method is needed since popping all elements effectively clears the stack
}

void explainQueue() {
    // Initialize a queue
    queue<int> q;

    // Enqueue elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Displaying the front of the queue
    if (!q.empty()) {
        cout << "Front element: " << q.front() << '\n';
    }

    // Dequeue element from the queue
    q.pop();
    cout << "Front element after one pop: " << q.front() << '\n';

    // Check the size of the queue
    cout << "Current size of queue: " << q.size() << '\n';

    // Enqueue more elements
    q.push(40);
    q.push(50);

    // Accessing elements (loop until queue is empty)
    cout << "Elements in queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop(); // Remove element after accessing
    }
    cout << '\n';

    // Check if queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << '\n';

    // Since queues don't support iterators, direct element access other than 'front' is not possible
    // No clearing method is needed since dequeuing all elements effectively clears the queue
}

void explainPriorityQueue() {
    // Initialize a priority queue
    // By default, it uses less as the comparison type, which makes it a max-heap
    priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(30); // this happens in log(n)
    pq.push(10);
    pq.push(20);
    pq.push(50);
    pq.push(40);

    cout << "Size of the priority queue: " << pq.size() << '\n';

    // Displaying the top element of the priority queue
    if (!pq.empty()) {
        cout << "Top element (max element): " << pq.top() << '\n';
    }

    // Remove the top element from the priority queue
    pq.pop();
    cout << "Top element after one pop: " << pq.top() << '\n';

    // Check the size of the priority queue
    cout << "Current size of priority queue: " << pq.size() << '\n';

    // Loop to empty the priority queue
    cout << "Elements in priority queue by descending order: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop(); // Remove the top element after accessing
    }
    cout << '\n';

    // Check if priority queue is empty
    cout << "Is priority queue empty? " << (pq.empty() ? "Yes" : "No") << '\n';

    // Initialize a max-heap
    priority_queue<int> maxHeap;

    // Initialize a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert elements into both priority queues
    int elements[] = {30, 10, 20, 50, 40};
    for (int elem : elements) {
        maxHeap.push(elem);
        minHeap.push(elem);
    }

    cout << "Size of the max-heap: " << maxHeap.size() << '\n';
    cout << "Size of the min-heap: " << minHeap.size() << '\n';

    // Display the top elements of the priority queues
    if (!maxHeap.empty() && !minHeap.empty()) {
        cout << "Top element of max-heap (max element): " << maxHeap.top() << '\n';
        cout << "Top element of min-heap (min element): " << minHeap.top() << '\n';
    }

    // Remove the top element from both priority queues
    maxHeap.pop();
    minHeap.pop();
    cout << "Top element of max-heap after one pop: " << maxHeap.top() << '\n';
    cout << "Top element of min-heap after one pop: " << minHeap.top() << '\n';

    // Display elements in descending order from the max-heap and ascending order from the min-heap
    cout << "Elements in max-heap by descending order: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << '\n';

    cout << "Elements in min-heap by ascending order: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << '\n';

    // Check if priority queues are empty
    cout << "Is max-heap empty? " << (maxHeap.empty() ? "Yes" : "No") << '\n';
    cout << "Is min-heap empty? " << (minHeap.empty() ? "Yes" : "No") << '\n';
}

void explainSet() { // Sorted & Unique
    // Initialize a set of integers
    set<int> mySet;

    // Insert elements
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);
    mySet.insert(30); // This will not be added again, as sets contain unique elements

    // Emplace an element
    mySet.emplace(60);

    // Output the elements
    cout << "Elements of mySet: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Using count to check for an element
    cout << "Count of 20 in mySet: " << mySet.count(20) << '\n';

    // Using find method
    if (mySet.find(20) != mySet.end()) {
        cout << "20 is in the set.\n";
    } else {
        cout << "20 is not in the set.\n";
    }

    // Remove an element
    mySet.erase(30);
    cout << "Elements after erasing 30: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Reverse iteration
    cout << "Elements in reverse order: ";
    for (auto rit = mySet.rbegin(); rit != mySet.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << '\n';

    // Size of the set
    cout << "Size of mySet: " << mySet.size() << '\n';

    // Check if the set is empty
    cout << "Is mySet empty? " << (mySet.empty() ? "Yes" : "No") << '\n';

    // Clear the set
    mySet.clear();
    cout << "Is mySet empty after clear? " << (mySet.empty() ? "Yes" : "No") << '\n';

    // Reinsert elements using aggregate initialization
    set<int> anotherSet = {50, 40, 30, 20, 10};
    set<int> tempSet = {15, 25, 35};

    // Using lower_bound and upper_bound
    auto lb = anotherSet.lower_bound(30); // Greater than or equal to 30
    auto ub = anotherSet.upper_bound(30); // Greater than 30
    cout << "Lower bound of 30: " << *lb << '\n';
    cout << "Upper bound of 30: " << (ub != anotherSet.end() ? to_string(*ub) : "No upper bound") << '\n';
    
    // Swap sets
    mySet.swap(tempSet);

    cout << "Elements of mySet after swap: ";
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
    cout << '\n';

    cout << "Elements of anotherSet: ";
    copy(anotherSet.begin(), anotherSet.end(), ostream_iterator<int>(cout, " "));
    cout << '\n';

    // Merge anotherSet into mySet
    mySet.merge(anotherSet);

    cout << "Elements of mySet after merge: ";
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
    cout << '\n';
}

void explainMultiSet() {
    // Initialize a multiset of integers
    multiset<int> myMultiSet;

    // Insert elements (duplicates are allowed)
    myMultiSet.insert(10);
    myMultiSet.insert(20);
    myMultiSet.insert(30);
    myMultiSet.insert(40);
    myMultiSet.insert(50);
    myMultiSet.insert(30); // Duplicates are allowed, so 30 will be added again
    myMultiSet.insert(50);
    myMultiSet.insert(50);

    // Emplace elements
    myMultiSet.emplace(25);

    // Output the elements
    cout << "Elements of myMultiSet: ";
    for (int elem : myMultiSet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Using find method to locate an element
    auto it = myMultiSet.find(30);
    if (it != myMultiSet.end()) {
        cout << "Element 30 found in myMultiSet.\n";
    } else {
        cout << "Element 30 not found in myMultiSet.\n";
    }

    // Count the occurrences of an element
    cout << "Count of 30 in myMultiSet: " << myMultiSet.count(30) << '\n';

    // Using lower_bound and upper_bound
    auto lb = myMultiSet.lower_bound(30); // Element not less than 30
    auto ub = myMultiSet.upper_bound(30); // Element greater than 30
    cout << "Elements between lower_bound and upper_bound of 30: ";
    for (auto it = lb; it != ub; ++it) {
        cout << *it << " ";
    }
    cout << '\n';

    // Remove elements
    myMultiSet.erase(30); // Removes all instances of 30
    cout << "Elements after erasing 30: ";
    for (int elem : myMultiSet) {
        cout << elem << " ";
    }
    cout << '\n';

    myMultiSet.erase(myMultiSet.find(50)); // only the first 50 is erased
    cout << "Elements after erasing first 50: ";
    for (int elem : myMultiSet) {
        cout << elem << " ";
    }
    cout << '\n';
    // Reverse iteration
    cout << "Elements in reverse order: ";
    for (auto rit = myMultiSet.rbegin(); rit != myMultiSet.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << '\n';

    // Check if the multiset is empty
    cout << "Is myMultiSet empty? " << (myMultiSet.empty() ? "Yes" : "No") << '\n';

    // Clear the multiset
    myMultiSet.clear();
    cout << "Is myMultiSet empty after clear? " << (myMultiSet.empty() ? "Yes" : "No") << '\n';

    // Reinsert elements using aggregate initialization
    multiset<int> anotherMultiSet = {50, 40, 30, 20, 10, 30, 30};

    // Swap multisets
    myMultiSet.swap(anotherMultiSet);

    cout << "Elements of myMultiSet after swap: ";
    copy(myMultiSet.begin(), myMultiSet.end(), ostream_iterator<int>(cout, " "));
    cout << '\n';
}

void explainUnorderedSet() {
    unordered_set<int> uSet;
    // It contains only unique elements
    // It is never sorted
    // Lower bound and upper bound won't work here
    // All the operations happens in O(1), except some collision happens that also once in bluemoon
    // Every method is as same as set method above

    // Initialize an unordered set of integers
    unordered_set<int> myUnorderedSet;

    // Insert elements
    myUnorderedSet.insert(10);
    myUnorderedSet.insert(20);
    myUnorderedSet.insert(30);
    myUnorderedSet.insert(40);
    myUnorderedSet.insert(50);
    myUnorderedSet.insert(30); // Duplicate, won't be added again.

    // Emplace elements
    myUnorderedSet.emplace(60);

    // Output the elements
    cout << "Elements of myUnorderedSet: ";
    for (int elem : myUnorderedSet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Find method to locate an element
    auto findIt = myUnorderedSet.find(20);
    cout << "Element 20 " << (findIt != myUnorderedSet.end() ? "found" : "not found") << " in myUnorderedSet.\n";

    // Count the occurrences of an element
    cout << "Count of 30 in myUnorderedSet: " << myUnorderedSet.count(30) << '\n';

    // Remove elements
    myUnorderedSet.erase(30);
    cout << "Elements after erasing 30: ";
    for (int elem : myUnorderedSet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Size of the unordered set
    cout << "Size of myUnorderedSet: " << myUnorderedSet.size() << '\n';

    // Check if the unordered set is empty
    cout << "Is myUnorderedSet empty? " << (myUnorderedSet.empty() ? "Yes" : "No") << '\n';

    // Clear the unordered set
    myUnorderedSet.clear();
    cout << "Is myUnorderedSet empty after clear? " << (myUnorderedSet.empty() ? "Yes" : "No") << '\n';

    // Reinsert elements using aggregate initialization
    unordered_set<int> anotherUnorderedSet = {50, 40, 30, 20, 10, 30};

    // Swap unordered sets
    myUnorderedSet.swap(anotherUnorderedSet);

    cout << "Elements of myUnorderedSet after swap: ";
    for (int elem : myUnorderedSet) {
        cout << elem << " ";
    }
    cout << '\n';

    // Load factor and rehash
    cout << "Current load factor: " << myUnorderedSet.load_factor() << '\n';
    myUnorderedSet.rehash(20); // Sets the number of buckets to at least 20
    cout << "Load factor after rehash: " << myUnorderedSet.load_factor() << '\n';
    myUnorderedSet.reserve(100);
    cout << "Load factor after reserve: " << myUnorderedSet.load_factor() << '\n';

    // Display bucket information
    cout << "Number of buckets: " << myUnorderedSet.bucket_count() << '\n';
    for (size_t i = 0; i < myUnorderedSet.bucket_count(); ++i) {
        cout << "Bucket #" << i << " has " << myUnorderedSet.bucket_size(i) << " elements.\n";
    }

    // Hash function and key equality
    auto hasher = myUnorderedSet.hash_function();
    cout << "Hash of 20: " << hasher(20) << '\n';
    auto key_eq = myUnorderedSet.key_eq();
    cout << "Does 20 equal 30? " << (key_eq(20, 30) ? "Yes" : "No") << '\n';
}


void explainMap() {
    // Initialize a map from int to string
    map<int, string> mp;

    // Insert elements
    mp.insert(make_pair(1, "Apple"));
    mp.insert(make_pair(2, "Banana"));
    mp[3] = "Cherry";
    mp[4] = "Date";

    // Emplace elements
    mp.emplace(5, "Elderberry");

    // Output the elements
    cout << "Elements of mp:" << endl;
    for (const auto& pair : mp) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Accessing elements using key
    if (mp.find(3) != mp.end()) {
        cout << "Element at key 3 is " << mp[3] << endl;
    }

    // Modifying an element
    mp[3] = "Blueberry";
    cout << "Modified element at key 3: " << mp[3] << endl;

    // Using find method to locate an element
    auto it = mp.find(2);
    cout << "Using pointer to dereference element from iterator of map: "<< (*it).second << '\n';

    if (it != mp.end()) {
        cout << "Found element with key 2: " << it->second << endl;
    } else {
        cout << "Key 2 not found." << endl;
    }

    // Erase elements by key
    mp.erase(1);
    cout << "Elements after erasing key 1:" << endl;
    for (const auto& pair : mp) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size of the map
    cout << "Size of mp: " << mp.size() << endl;

    // Check if the map is empty
    cout << "Is mp empty? " << (mp.empty() ? "Yes" : "No") << endl;

    // Clear the map
    mp.clear();
    cout << "Is mp empty after clear? " << (mp.empty() ? "Yes" : "No") << endl;

    // Reinsert elements using aggregate initialization
    map<int, string> anotherMap = {{1, "Apricot"}, {2, "Blackberry"}, {3, "Clementine"}};

    // Swap maps
    mp.swap(anotherMap);

    cout << "Elements of mp after swap:" << endl;
    for (const auto& pair : mp) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Using lower_bound and upper_bound
    auto lb = mp.lower_bound(2);  // First element not less than key 2
    auto ub = mp.upper_bound(2);  // First element greater than key 2
    cout << "Elements between lower_bound and upper_bound of 2:" << endl;
    for (auto it = lb; it != ub; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Multi-access: Access all elements less than key 3
    cout << "Elements with keys less than 3:" << endl;
    for (auto it = mp.begin(); it != mp.lower_bound(3); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Using count to check for presence of a key
    cout << "Count of key 2 in mp: " << mp.count(2) << endl;

    // Displaying the max size of the map
    cout << "Max size of mp: " << mp.max_size() << endl;

    // Using equal_range to find the range of a specific key
    auto range = mp.equal_range(2);
    cout << "Equal range of key 2:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Map of int to pair
    map<int, pair<int, int>> mapIntToPair;
    mapIntToPair[1] = make_pair(100, 200);
    mapIntToPair.emplace(2, make_pair(300, 400));

    // Print map of int to pair
    cout << "Map of int to pair:" << endl;
    for (const auto& elem : mapIntToPair) {
                cout << elem.first << " => (" << elem.second.first << ", " << elem.second.second << ")" << endl;
    }

    // Map of pair to int
    map<pair<int, int>, int> mapPairToInt;
    mapPairToInt[make_pair(5, 5)] = 10;
    mapPairToInt.emplace(make_pair(6, 6), 20);

    // Print map of pair to int
    cout << "Map of pair to int:" << endl;
    for (const auto& elem : mapPairToInt) {
        cout << "(" << elem.first.first << ", " << elem.first.second << ") => " << elem.second << endl;
    }

    // Demonstrating all other map methods
    map<int, string> myMap;

    // Insert elements
    myMap.insert(make_pair(1, "Apple"));
    myMap.emplace(2, "Banana");

    // Access elements
    cout << "Element at key 1: " << myMap[1] << endl;

    // Modify elements
    myMap[1] = "Avocado";

    // Find method to locate elements
    if (myMap.find(1) != myMap.end()) {
        cout << "Element with key 1 found: " << myMap[1] << endl;
    }

    // Erase elements
    myMap.erase(1);

    // Using iterators
    cout << "All elements in myMap:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size of the map
    cout << "Size of myMap: " << myMap.size() << endl;

    // Check if map is empty
    cout << "Is myMap empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // Clear the map
    myMap.clear();

    // Using lower_bound and upper_bound
    auto lb_myMap = myMap.lower_bound(1); // First element not less than key 1
    auto ub_myMap = myMap.upper_bound(1); // First element greater than key 1

    // Range queries
    auto range_myMap = myMap.equal_range(2);

    // Load factor and rehash (for unordered_map, included here for completeness)
    // myMap.rehash(50);
    // myMap.reserve(100);

    // Max size of the map
    cout << "Max size of myMap: " << myMap.max_size() << endl;

    // Swap maps
    map<int, string> swapMap = {{3, "Cherry"}, {4, "Date"}};
    myMap.swap(swapMap);

    // Display swapped map
    cout << "Contents of swapped myMap:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }
}

void explainMultiMap() { // Can have duplicate keys, but in sorted manner
    // Initialize a multimap from int to string
    multimap<int, string> mm;

    // Insert elements
    mm.insert(make_pair(1, "Apple"));
    mm.insert(make_pair(2, "Banana"));
    mm.insert(make_pair(1, "Avocado"));  // Multiple entries for key 1
    mm.insert(make_pair(2, "Blueberry"));
    mm.insert(make_pair(3, "Cherry"));

    // Emplace elements
    mm.emplace(3, "Clementine");

    // Output the elements
    cout << "Elements of mm:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    cout << "Reverse order:" << endl;
    for (auto it = mm.rbegin(); it != mm.rend(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    auto comp = mm.key_comp();
    cout << "Key comparison for 1 and 2: " << comp(1, 2) << endl;

    // Insert with Hint
    auto iterator = mm.begin();
    mm.insert(iterator, make_pair(3, "Dragonfruit"));  // Inserting with a hint

    vector<pair<int, string>> entries = {{7, "Grapefruit"}, {8, "Honeydew"}};
    mm.insert(entries.begin(), entries.end());

    cout << "Elements of mm after inserting 3(Dragonfruit),7,8: " << endl;

    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }
    // Accessing elements using key
    auto range = mm.equal_range(1);
    cout << "Elements with key 1:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Modifying an element (not directly possible, must remove and insert)
    auto it = mm.find(2);
    if (it != mm.end()) {
        mm.erase(it);  // Erase one instance of key 2
        mm.insert(make_pair(2, "Berry"));  // Insert modified value
    }

    it = mm.find(3);
    if (it != mm.end()) mm.erase(it);  // Erase single element by iterator

    // Show all elements again after modification
    cout << "Elements of mm after modification:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Using lower_bound and upper_bound
    auto lb = mm.lower_bound(2);  // First element not less than key 2
    auto ub = mm.upper_bound(2);  // First element greater than key 2
    cout << "Elements between lower_bound and upper_bound of 2:" << endl;
    for (auto it = lb; it != ub; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Count the number of elements with a specific key
    int count = mm.count(1);
    cout << "Number of elements with key 1: " << count << endl;

    // Erase elements by key
    mm.erase(1);  // Erases all elements with key 1
    cout << "Elements after erasing all with key 1:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size of the multimap
    cout << "Size of mm: " << mm.size() << endl;

    // Check if the multimap is empty
    cout << "Is mm empty? " << (mm.empty() ? "Yes" : "No") << endl;

    // Clear the multimap
    mm.clear();
    cout << "Is mm empty after clear? " << (mm.empty() ? "Yes" : "No") << endl;

    // Reinsert elements using aggregate initialization
    multimap<int, string> anotherMm = {{1, "Apricot"}, {2, "Blackberry"}, {3, "Clementine"}};

    // Swap multimaps
    mm.swap(anotherMm);

    cout << "Elements of mm after swap:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }
}

void explainUnorderedMap() { // Not Sorted, all functions are O(1), Unique
    // Initialize an unordered_map from int to string
    unordered_map<int, string> umap;

    // Insert elements
    umap.insert({1, "Apple"});
    umap.insert({2, "Banana"});
    umap[3] = "Cherry";
    umap.emplace(4, "Date");

    auto hint = umap.find(3);
    umap.insert(hint, {6, "Fig"});  // Inserting with a hint

    //Insertion for Range:
    vector<pair<const int, string>> entries = {{7, "Grape"}, {8, "Honeydew"}};
    umap.insert(entries.begin(), entries.end());


    // Output the elements
    cout << "Elements of umap:" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Accessing elements using key
    cout << "Element at key 3 is " << umap[3] << endl;

    // Modifying an element
    umap[3] = "Blueberry";
    cout << "Modified element at key 3: " << umap[3] << endl;

    // Using find method to locate an element
    auto it = umap.find(2);
    if (it != umap.end()) {
        cout << "Found element with key 2: " << it->second << endl;
    } else {
        cout << "Key 2 not found." << endl;
    }

    // Erase elements by key
    umap.erase(1);
    cout << "Elements after erasing key 1:" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size of the unordered map
    cout << "Size of umap: " << umap.size() << endl;

    // Check if the unordered map is empty
    cout << "Is umap empty? " << (umap.empty() ? "Yes" : "No") << endl;

    // Clear the unordered map
    umap.clear();
    cout << "Is umap empty after clear? " << (umap.empty() ? "Yes" : "No") << endl;

    // Reinsert elements using aggregate initialization
    unordered_map<int, string> anotherUmap = {{1, "Apricot"}, {2, "Blackberry"}, {3, "Clementine"}};

    // Swap unordered_maps
    umap.swap(anotherUmap);

    cout << "Elements of umap after swap:" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Additional methods demonstration
    // Load factor
    cout << "Load factor: " << umap.load_factor() << endl;

    // Bucket count
    cout << "Bucket count: " << umap.bucket_count() << endl;

    // Max load factor
    cout << "Max load factor: " << umap.max_load_factor() << endl;
    umap.max_load_factor(0.75f);  // set new max load factor

    cout << "Total buckets: " << umap.bucket_count() << endl;
    // Rehash
    umap.rehash(20);  // rehash the container increasing the number of buckets
    cout << "New bucket count after rehash: " << umap.bucket_count() << endl;

    // Reserve
    umap.reserve(50);  // reserve space for at least 50 elements
    cout << "Bucket count after reserve: " << umap.bucket_count() << endl;

    size_t bucket = umap.bucket(3);
    cout << "Elements in bucket " << bucket << ": ";
    for (auto local_it = umap.begin(bucket); local_it != umap.end(bucket); ++local_it) {
        cout << local_it->second << " ";
    }
    cout << endl;

    // Iterate over each bucket
    for (size_t i = 0; i < umap.bucket_count(); ++i) {
        cout << "Bucket #" << i << " contains " << umap.bucket_size(i) << " elements." << endl;
    }
}

bool comp(pair<int, int> p1, pair<int,int> p2){
    // sort it according to second element
    // if second element is same, then sort it according to first element but in descending
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra() {
    // Sorting vector of integers
    vector<int> nums = {4, 1, 3, 2, 5};
    sort(nums.begin(), nums.end());  // Ascending
    cout << "Sorted nums ascending: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sort(nums.begin(), nums.end(), greater<int>());  // Descending
    cout << "Sorted nums descending: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting vector of pairs
    vector<pair<int, int>> vecPairs = {{1, 2}, {3, 1}, {2, 4},{5,4}};
    vector<pair<int, string>> vecPairsStr = {{1, "Banana"}, {3, "Apple"}, {2, "Cherry"}};

    sort(vecPairs.begin(), vecPairs.end(), comp);
    cout << "Sorted vecPairs by custom logic: ";
    for (auto& p : vecPairs) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    
    // Sorting pairs<int, int> based on first element (ascending)
    sort(vecPairs.begin(), vecPairs.end());
    cout << "Sorted vecPairs by first ascending: ";
    for (auto& p : vecPairs) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    // Sorting pairs<int, string> based on second element (ascending)
    sort(vecPairsStr.begin(), vecPairsStr.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.second < b.second;  // sorting by string value
    });
    cout << "Sorted vecPairsStr by second ascending: ";
    for (auto& p : vecPairsStr) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    // Using __builtin_popcount and __builtin_popcountll
    cout << "Popcount of 15 (1111 in binary): " << __builtin_popcount(15) << endl;
    cout << "PopcountLL of 1<<31: " << __builtin_popcountll(1LL << 31) << endl;

    // Sorting a string using next_permutation
    string s = "apple";
    sort(s.begin(), s.end());  // sort to the smallest permutation
    cout << "Sorted string ascending: " << s << endl;
    while (next_permutation(s.begin(), s.end())) {
        cout << "Next permutation: " << s << endl;
    }

    // Using max_element and min_element
    auto maxIt = max_element(nums.begin(), nums.end());
    cout << "Max element in nums: " << *maxIt << endl;

    auto minIt = min_element(nums.begin(), nums.end());
    cout << "Min element in nums: " << *minIt << endl;
}
