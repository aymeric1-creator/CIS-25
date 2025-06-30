/ Optional: Load and display data from file 
   void loadFromFile() { 
       ifstream in("items.txt"); 
       if (in.is_open()) { 
           string line; 
           while (getline(in, line)) { 
               cout << "File content: " << line << endl; 
           } 
           in.close(); 
       } else { 
           cout << "Unable to open file for reading." << endl; 
       } 
   } 
}; 
 int main() { 
   Item tool; 
   tool.name = "Screwdriver"; 
   tool.quantity = 10; 
 
   tool.saveToFile(); 
   tool.loadFromFile(); // Optional 
 
   return 0; 
} 
 
