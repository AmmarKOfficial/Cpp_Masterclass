#include <iostream>
using namespace std;
const int SIZE = 5; // Define the size of the hash table
struct DataItem {
   int key;
};
struct DataItem* hashArray[SIZE]; // Define the hash table as an array of DataItem pointers

int hashCode(int key) {
   // Implement your hash function here
   // Return a hash value based on the key
   
   // A simple hash function (modulo division)
   return key % SIZE;
}

void insert(int key) {
   // Create a new DataItem using new
   struct DataItem* newItem = new DataItem;
   newItem->key = key;
   // Initialize other data members if needed
   // Calculate the hash index for the key
   int hashIndex = hashCode(key);
   // Handle collisions (linear probing)
   while (hashArray[hashIndex] != nullptr) {
      // Move to the next cell
      ++hashIndex;
      // Wrap around the table if needed
      hashIndex %= SIZE;
   }
   // Insert the new DataItem at the calculated index
   hashArray[hashIndex] = newItem;
   // Print the inserted item's key and hash index
   cout << "Inserted key " << newItem->key << " at index " << hashIndex << endl;
}
void deleteItem(int key) {
   // Find the item in the hash table
   int hashIndex = hashCode(key);
   while (hashArray[hashIndex] != nullptr) {
      if (hashArray[hashIndex]->key == key) {
         // Mark the item as deleted (optional: free memory)
         delete hashArray[hashIndex];
         hashArray[hashIndex] = nullptr;
         return;
      }
      // Move to the next cell
      ++hashIndex;
      // Wrap around the table if needed
      hashIndex %= SIZE;
   }
   // If the key is not found, print a message
   cout << "Item with key " << key << " not found." << endl;
}
int main() {
   // Call the insert function with different keys to populate the hash table
   cout<<"Hash Table Contents before deletion:\n";
   insert(1); // Insert an item with key 42
   insert(2); // Insert an item with key 25
   insert(3); // Insert an item with key 64
   insert(4); // Insert an item with key 22
   int ele1 = 2;
   int ele2 = 4;
   cout<<"The key to be deleted: "<<ele1<<" and "<<ele2<<"\n";
   deleteItem(ele1); // Delete an item with key 42
   deleteItem(ele2); // Delete an item with key 25
   cout<<"Hash Table Contents after deletion:\n";
   // Print the hash table's contents after delete operations
   for (int i = 1; i < SIZE; i++) {
      if (hashArray[i] != nullptr) {
         cout << "Index " << i << ": Key " << hashArray[i]->key << endl;
      } else {
         cout << "Index " << i << ": Empty" << endl;
      }
   }
   return 0;
}