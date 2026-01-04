📌 Explaining unordered_map using Intersection of Y-Shaped Linked List (with diagram)
🔹 What is unordered_map?

unordered_map is a hash table–based data structure.

Stores data in (key → value) form

Search / Insert / Delete → average O(1)

Order is not maintained

👉 In this question:

Key = Node* (address of node)

Value = true / 1 (just a marker)

🧠 Why unordered_map Here?

We want to quickly check:

“Has this node appeared in List-1 before?”

Hashing gives us fast lookup.

🪜 Step-by-Step Explanation (With Diagram)
🧩 Given Y-Shaped Linked List
List 1: 10 → 20 → 30
                      ↘
                        50 → 60 → NULL
                      ↗
List 2:       15 → 25


👉 Intersection point = node 50

🔸 Step 1: Traverse List-1 and store in unordered_map

We store addresses, not values.

unordered_map<Node*, bool> mp;

Hash Map After List-1 Traversal
Key (Node Address)     Value
------------------------------
addr(10)   ----------> true
addr(20)   ----------> true
addr(30)   ----------> true
addr(50)   ----------> true
addr(60)   ----------> true


📌 Visually (Hash Table Concept)

[ Hash Table ]
   |
   |--> addr(10) : true
   |--> addr(20) : true
   |--> addr(30) : true
   |--> addr(50) : true
   |--> addr(60) : true

🔸 Step 2: Traverse List-2 and check in map
Traversal of List-2
15 → 25 → 50 → 60


15 → ❌ not found in map

25 → ❌ not found

50 → ✅ FOUND in map

🎯 Intersection detected at node 50

🔸 Step 3: Return the intersection node
return node(50);

🧾 Code (For Reference)
Node* intersectPoint(Node* head1, Node* head2) {
    unordered_map<Node*, bool> mp;

    Node* temp = head1;
    while (temp != NULL) {
        mp[temp] = true;
        temp = temp->next;
    }

    temp = head2;
    while (temp != NULL) {
        if (mp.find(temp) != mp.end()) {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

⏱️ Complexity

Time: O(n + m)

Space: O(n)
